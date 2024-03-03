// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_RabbitStopListening.h"

#include "BehaviorTree/BlackboardComponent.h"

UMyBTTask_RabbitStopListening::UMyBTTask_RabbitStopListening(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Stop Listening";

}

EBTNodeResult::Type UMyBTTask_RabbitStopListening::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerComp.GetBlackboardComponent()->SetValueAsBool("PlayerHeard", false);
	return Super::ExecuteTask(OwnerComp, NodeMemory);
}
