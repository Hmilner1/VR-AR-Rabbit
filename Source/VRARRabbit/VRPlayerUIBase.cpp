#include "VRPlayerUIBase.h"
#include "MyVRMenu.h"
#include "VRPlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnhancedInputSubsystems.h"
#include "VrPlayerController.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"

AVRPlayerUIBase::AVRPlayerUIBase()
{
	PrimaryActorTick.bCanEverTick = true;
	NewRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Menu Origin"));
	RootComponent = NewRoot;

	PlayerUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("MyWidgetComponent"));
	PlayerUI->SetupAttachment(NewRoot);

	MenuCursor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	MenuCursor->SetupAttachment(PlayerUI);
	
}

void AVRPlayerUIBase::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerPawn = Cast<AVRPlayerPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	RightWidgetIntract = PlayerPawn->WidgetInteractionRight;
	
	AVrPlayerController* PlayerController = Cast<AVrPlayerController>(PlayerPawn->GetController());
	PlayerController->InputSubsystem->AddMappingContext(UiInputMapping, 2);

	NiagraComponentMenuLine = UNiagaraFunctionLibrary::SpawnSystemAttached(NiagraMenuLine,
		RootComponent, NAME_None, FVector(0.f),
		FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset,
		false);
	
	if (UIWidgetClass)
	{
		PlayerUI->SetWidgetClass(UIWidgetClass);
		PlayerUI->SetWidgetSpace(EWidgetSpace::World);
		PlayerUI->SetDrawSize(FVector2D(1920.f, 1080.f));
	}
	if(PlayerPawn)
	{
		PlayerPawn->MenuClosed.AddDynamic(this,&AVRPlayerUIBase::RemoveInputSystem);
	}
}

void AVRPlayerUIBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(PlayerPawn)
	{
		FVector UILocation = PlayerUI->GetComponentLocation();
		FVector CameraLocation = PlayerPawn->VrCamera->GetComponentLocation();
		FVector CursorLocation;
		FName ArrayName = ("User.PointArray");

		FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(UILocation,CameraLocation);
		PlayerUI->SetWorldRotation(NewRotation);

		CursorLocation = RightWidgetIntract->GetLastHitResult().ImpactPoint;
		MenuCursor->SetWorldLocation(CursorLocation);

		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(
			NiagraComponentMenuLine,
			ArrayName,
			0,
			RightWidgetIntract->GetComponentLocation(),
			false);

		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(
			NiagraComponentMenuLine,
			ArrayName,
			1,
			CursorLocation,
			false);
	}
}

void AVRPlayerUIBase::MenuSelect()
{
	RightWidgetIntract->UWidgetInteractionComponent::PressPointerKey(EKeys::LeftMouseButton);
}

void AVRPlayerUIBase::RemoveInputSystem()
{
	AVrPlayerController* PlayerController = Cast<AVrPlayerController>(PlayerPawn->GetController());
	PlayerController->InputSubsystem->RemoveMappingContext(UiInputMapping);
	this->Destroy();
}