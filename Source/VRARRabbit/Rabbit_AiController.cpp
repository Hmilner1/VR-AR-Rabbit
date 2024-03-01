// Fill out your copyright notice in the Description page of Project Settings.


#include "Rabbit_AiController.h"
#include "RabbitAICharacter.h"
#include "VRPlayerPawn.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

ARabbit_AiController::ARabbit_AiController(FObjectInitializer const& ObjectInitializer)
{
	RabbitSightSetup();
}

void ARabbit_AiController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(ARabbitAICharacter* const RabbitCharacter = Cast<ARabbitAICharacter>(InPawn))
	{
		if(UBehaviorTree* const BehaviorTree = RabbitCharacter->GetTree())
		{
			UBlackboardComponent* BlackboardComponent;
			UseBlackboard(BehaviorTree->BlackboardAsset, BlackboardComponent);
			Blackboard = BlackboardComponent;
			RunBehaviorTree(BehaviorTree);
		}
	}
}

void ARabbit_AiController::RabbitSightSetup()
{
	RabbitSight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Configuration"));
	if(RabbitSight)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception")));
		RabbitSight->SightRadius = 500.f;
		RabbitSight->LoseSightRadius = 575.f;
		RabbitSight->PeripheralVisionAngleDegrees = 180.f;
		RabbitSight->SetMaxAge(5.0f);
		RabbitSight->AutoSuccessRangeFromLastSeenLocation = 570.f;
		RabbitSight->DetectionByAffiliation.bDetectNeutrals = true;
		RabbitSight->DetectionByAffiliation.bDetectFriendlies = true;
		RabbitSight->DetectionByAffiliation.bDetectEnemies = true;



		GetPerceptionComponent()->SetDominantSense(*RabbitSight->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &ARabbit_AiController::OnTargetSeen);
		GetPerceptionComponent()->ConfigureSense(*RabbitSight);
	}
}

void ARabbit_AiController::OnTargetSeen(AActor* Player, FAIStimulus const Stimulus)
{
	if(AVRPlayerPawn* const PlayerPawn = Cast<AVRPlayerPawn>(Player))
	{
		GetBlackboardComponent()->SetValueAsBool("PlayerSeen", Stimulus.WasSuccessfullySensed());
	}
}
