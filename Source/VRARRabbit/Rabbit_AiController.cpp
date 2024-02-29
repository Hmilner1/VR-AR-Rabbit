// Fill out your copyright notice in the Description page of Project Settings.


#include "Rabbit_AiController.h"

#include "RabbitAICharacter.h"
#include "BehaviorTree/BehaviorTree.h"

ARabbit_AiController::ARabbit_AiController(FObjectInitializer const& ObjectInitializer)
{
	
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
