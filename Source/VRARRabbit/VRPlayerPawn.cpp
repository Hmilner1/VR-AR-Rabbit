#include "VRPlayerPawn.h"
#include "MotionControllerComponent.h"
#include "Engine/EngineTypes.h" 
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "VRTeleportBase.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"

AVRPlayerPawn::AVRPlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	//sets up new root object
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VR Origin"));
	RootComponent = DummyRoot;

	//sets up VR objects
	MotionControllerRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	MotionControllerRight->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform);
	WidgetInteractionRight = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("RightWidgetComponent"));
	WidgetInteractionRight->AttachToComponent(MotionControllerRight,FAttachmentTransformRules::KeepRelativeTransform);
	
	MotionControllerLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	MotionControllerLeft->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform);
	VrCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VR Camera"));
	VrCamera->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform);
}

void AVRPlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	if(IsHMDEnabled())
	{
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Stage);
		FString Command = "vr.PixelDensity 1.0";
		UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),Command);
	}
	
	//Sets Up Line Trace
	NiagraComponentLineTrace = UNiagaraFunctionLibrary::SpawnSystemAttached(NiagraLineTrace,
		RootComponent, NAME_None, FVector(0.f),
		FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset,
		false);
	NiagraComponentLineTrace->SetVisibility(false);
}

void AVRPlayerPawn::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
}

void AVRPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool AVRPlayerPawn::IsHMDEnabled()
{
	if (UGameViewportClient* GameViewportClient = GEngine->GameViewport)
	{
		UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	}
	return false;
}

void AVRPlayerPawn::MoveTriggered()
{
	if(!MotionControllerRight){return;};

	//Sets up Params based on blueprint info
	FVector ControllerWorldPosition = MotionControllerRight->GetComponentLocation();
	FVector ControllerForwardVector = MotionControllerRight->GetForwardVector();
	FVector LaunchVelocity = UKismetMathLibrary::Multiply_VectorVector(ControllerForwardVector,UKismetMathLibrary::Conv_DoubleToVector(TeleportSpeed));

	//applied the variables to the params 
	FPredictProjectilePathParams Params;
	Params.ProjectileRadius = TeleportRadius;
	Params.StartLocation = ControllerWorldPosition;
	Params.LaunchVelocity = LaunchVelocity;
	Params.TraceChannel = ECC_WorldStatic;
	Params.bTraceWithCollision = true;
	Params.bTraceComplex = true;
	
	FPredictProjectilePathResult HitResults;
	
	UGameplayStatics::PredictProjectilePath(this, Params, HitResults);
	
	TArray<FPredictProjectilePathPointData> TracePath = HitResults.PathData;
	TArray<FVector>ConvertedPath = ConvertPathDataArray(TracePath);
	ConvertedPath.Insert(ControllerWorldPosition, 0);
	
	if(ValidateTeleportPosition(HitResults))
	{
		TeleportVisual->SetActorHiddenInGame(false);
	}
	TeleportVisual->SetActorLocation(ProjectedPoint);
	DrawLineTrace(ConvertedPath, ControllerWorldPosition); 
	
}

void AVRPlayerPawn::MoveStarted()
{
	NiagraComponentLineTrace->SetVisibility(true);
	
	TeleportVisual = GetWorld()->SpawnActor<AVRTeleportBase>(TeleportVisualActorComponent,
		RootComponent->GetComponentTransform());
	TeleportVisual->SetActorHiddenInGame(true);
}

void AVRPlayerPawn::MoveCompleted()
{
	TeleportVisual->Destroy();
	NiagraComponentLineTrace->SetVisibility(false);

	
	//SetActorLocation(TeleportLocation);
	if(ValidTeleportLocation)
	{
		FVector CamLocation = VrCamera->GetRelativeLocation();
		FRotator ActorRotation = GetActorRotation();
		
		ActorRotation.Roll = 0;
		ActorRotation.Pitch = 0;
		FVector TempVector (CamLocation.X,CamLocation.Y,0);
		
		FVector CameraPos = UKismetMathLibrary::GreaterGreater_VectorRotator(TempVector,ActorRotation);
		TeleportLocation = UKismetMathLibrary::Subtract_VectorVector(TeleportLocation,CameraPos);
		TeleportLocation.Z = TeleportLocation.Z + 100;
		K2_TeleportTo(TeleportLocation,FRotator(0,ActorRotation.Yaw,0));
	}
}

void AVRPlayerPawn::TurnStarted(double Input)
{
	bool TurningRight = false;
	FVector LocalCameraLocation = VrCamera->GetComponentLocation();
	FTransform LocalCameraTransform = VrCamera->GetRelativeTransform();
	
	if(Input > 0.0f)
	{
		TurningRight = true;
	}
	float NewYaw = UKismetMathLibrary::SelectFloat(UKismetMathLibrary::Abs(TurnSnappingAmount),
		TurnSnappingAmount,
		TurningRight);

	FRotator NewRotation = UKismetMathLibrary::ComposeRotators(GetActorRotation(),
		FRotator(0,NewYaw,0));
	
	FTransform NewTransform = UKismetMathLibrary::MakeTransform(GetActorLocation(),
		NewRotation,
		FVector(1,1,1));

	FHitResult result;
	K2_AddActorWorldRotation(FRotator(0,NewYaw,0),false,result,true);
	FTransform ComposedTransform = UKismetMathLibrary::ComposeTransforms(LocalCameraTransform,NewTransform);
	FVector SubtractedVector = UKismetMathLibrary::Subtract_VectorVector(LocalCameraLocation,ComposedTransform.GetLocation());
	FVector NewTeleportLocation = UKismetMathLibrary::Add_VectorVector(SubtractedVector,GetActorLocation());
	SetActorLocation(NewTeleportLocation);
}

void AVRPlayerPawn::HandleMenu()
{
	if(PlayerUIActor == nullptr)
	{
		FVector NewScale = FVector(0.1f, 0.1f, 0.1f);
		FVector SpawnLocation = MotionControllerLeft->GetRelativeLocation() + FVector(0.0f, 0.0f, 70.0f);
		
		PlayerUIActor = GetWorld()->SpawnActor<AVRPlayerUIBase>(UIClass,
		SpawnLocation, GetActorRotation());
		
		PlayerUIActor->SetActorScale3D(NewScale);
		
		PlayerUIActor->AttachToComponent(MotionControllerLeft,
			FAttachmentTransformRules::KeepRelativeTransform);
	}
	else if(PlayerUIActor != nullptr)
	{
		MenuClosed->Broadcast();
		//PlayerUIActor = nullptr;
	}
}

void AVRPlayerPawn::DrawLineTrace(TArray<FVector> Path, FVector StartPos )
{
	FName pathname = "User.PointArray";
	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(
		NiagraComponentLineTrace,
		pathname,
		Path); 
}

bool AVRPlayerPawn::ValidateTeleportPosition(FPredictProjectilePathResult HitResults)
{
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	FVector query(0.0f,0.0f,0.0f);
	FVector TeleportPosition = HitResults.HitResult.Location;
	
	ValidTeleportLocation = NavSys->K2_ProjectPointToNavigation(
		GetWorld(),
		TeleportPosition,
		ProjectedPoint,
		nullptr,
		nullptr,
		query);

	TeleportLocation = ProjectedPoint;
	ProjectedPoint.Z = ProjectedPoint.Z;
	
	if(ValidTeleportLocation)
	{
		TeleportVisual->SetActorHiddenInGame(false);
		return true;
	}
	if(!ValidTeleportLocation)
	{
		TeleportVisual->SetActorHiddenInGame(true);
	}
	return false;
}


TArray<FVector> AVRPlayerPawn::ConvertPathDataArray(TArray<FPredictProjectilePathPointData> PathDataArray)
{
	TArray<FVector> ResultArray;

	for (FPredictProjectilePathPointData PointData : PathDataArray)
	{
		ResultArray.Add(PointData.Location);
	}

	return ResultArray;
}

