// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Rabbit_AiController.generated.h"


UCLASS()
class VRARRABBIT_API ARabbit_AiController : public AAIController
{
	GENERATED_BODY()

public:
	explicit ARabbit_AiController(FObjectInitializer const& ObjectInitializer);
	virtual void OnPossess(APawn* InPawn) override;

protected:

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	float RabbitSightRadius = 50;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	float RabbitLoseRadius = 75;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	float RabbitVisionAngle = 360;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	float RabbitHearingRage = 1000;
	
	
	class UAISenseConfig_Sight* RabbitSight;
	class UAISenseConfig_Hearing* RabbitHearing;
	
	void RabbitSightSetup();
	void RabbitHearingSetup();

	UFUNCTION()
	void OnTargetSeen(AActor* Player, FAIStimulus const Stimulus);
	UFUNCTION()
	void OnTargetHeard(AActor* Player, FAIStimulus const Stimulus);
	
	
};
