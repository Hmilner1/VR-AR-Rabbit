#pragma once

#include "CoreMinimal.h"
#include "VRPlayerUIBase.h"
#include "VRTeleportBase.h"
#include "Components/WidgetInteractionComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "VRPlayerPawn.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMenuClosedDelegate);

class UCameraComponent;
class UMotionControllerComponent;
class USoundCue;
class UAIPerceptionStimuliSourceComponent;
UCLASS()
class VRARRABBIT_API AVRPlayerPawn : public APawn
{
public:	
	AVRPlayerPawn();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	void MoveTriggered();
	UFUNCTION()
	void MoveStarted();
	UFUNCTION()
	void MoveCompleted();
	UFUNCTION()
	void TurnStarted(double Input);
	UFUNCTION()
	void HandleMenu();
	UFUNCTION()
	void HandleWhistle();
	
	UPROPERTY()
	TObjectPtr<class USceneComponent> DummyRoot;
	
	//VR Components
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Controller")
	UMotionControllerComponent* MotionControllerRight;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Controller")
	UWidgetInteractionComponent* WidgetInteractionRight;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Controller")
	UMotionControllerComponent* MotionControllerLeft;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Camera")
	UCameraComponent* VrCamera;
	UAudioComponent* AudioComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Whistle Audio")
	USoundCue* WhistleSound;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Menu")
	UClass* UIClass;
	UPROPERTY()
	AVRPlayerUIBase* PlayerUIActor = nullptr;

	
	//Player Bounds Actor
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TeleportActor")
	//UClass* TeleportVisualActorComponent;
	//UPROPERTY()
	//AVRTeleportBase* TeleportVisual;
	//Line Trace
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Niagara")
	UNiagaraSystem* NiagraLineTrace;
	UPROPERTY()
	UNiagaraComponent* NiagraComponentLineTrace;

	//teleport variables 
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Teleport Velocity")
	float TeleportSpeed = 650;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Teleport Radius")
	float TeleportRadius = 3.6;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Amount to Turn")
	float TurnSnappingAmount = -45;

	//Delegates
	FOnMenuClosedDelegate MenuClosed;
protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	FVector ProjectedPoint;
	UPROPERTY()
	FVector TeleportLocation;
	UPROPERTY()
	bool ValidTeleportLocation;
	
private:
	UFUNCTION()
	void DrawLineTrace(TArray<FVector> Path,FVector StartPos);
	UFUNCTION()
	TArray<FVector> ConvertPathDataArray(TArray<FPredictProjectilePathPointData> PathDataArray);
	UFUNCTION()
	bool ValidateTeleportPosition(FPredictProjectilePathResult HitResults);
	UFUNCTION()
	bool IsHMDEnabled();

	UAIPerceptionStimuliSourceComponent* StimSource;

	void SetupStimSource();
	
	GENERATED_BODY()
};
