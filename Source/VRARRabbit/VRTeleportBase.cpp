#include "VRTeleportBase.h"
#include "HeadMountedDisplayTypes.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"

AVRTeleportBase::AVRTeleportBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AVRTeleportBase::BeginPlay()
{
	Super::BeginPlay();
	NiagraComponentPlayerBounds = UNiagaraFunctionLibrary::SpawnSystemAttached(NiagraPlayerBounds,
	RootComponent, NAME_None, FVector(0.f),
	FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset,
	false);

	NiagraComponentPlayerRing = UNiagaraFunctionLibrary::SpawnSystemAttached(NiagraPlayerRing,
		NiagraComponentPlayerBounds, NAME_None, FVector(0.f),
		FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset,
		false);
	
	
	FVector2d PlayBoundsVec2D = UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(EHMDTrackingOrigin::Stage);
	FVector PlayBoundsVec = FVector(PlayBoundsVec2D.X,PlayBoundsVec2D.Y,0.0f);
	FName InName = FName(TEXT("User.PlayAreaBounds"));
	
	NiagraComponentPlayerBounds->SetVariableVec3(InName,PlayBoundsVec);
}

void AVRTeleportBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(),0);
	APawn* PlayerPawn = PlayerController->GetPawn();
	
	APlayerCameraManager* PlayerCameraManager =  PlayerController->PlayerCameraManager;

	FTransform playerPos = PlayerPawn->GetActorTransform();
	FVector cameraPos = PlayerCameraManager->GetCameraLocation();
	
	FVector NewBoundsLocation = UKismetMathLibrary::InverseTransformLocation(playerPos, cameraPos);
	NewBoundsLocation = UKismetMathLibrary::NegateVector(NewBoundsLocation);
	NewBoundsLocation.Z = 0;
	FHitResult HitOut;
	
	NiagraComponentPlayerBounds->K2_SetRelativeLocation(NewBoundsLocation,false,HitOut,false);
	
	SetActorRotation(PlayerPawn->K2_GetActorRotation());
}
