// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_RabbitWander.h"

#include "NavigationSystem.h"
#include "RabbitAICharacter.h"
#include "Rabbit_AiController.h"
#include "BehaviorTree/BlackboardComponent.h"

UMyBTTask_RabbitWander::UMyBTTask_RabbitWander(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Return New Location";
}

EBTNodeResult::Type UMyBTTask_RabbitWander::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if(ARabbit_AiController* const RabbitController = Cast<ARabbit_AiController>(OwnerComp.GetAIOwner()))
	{
		if(APawn* const AiRabbit = RabbitController->GetPawn())
		{
			FVector const RabbitLocation = AiRabbit->GetActorLocation();

			if(UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation NewLocation;
				if(NavSystem->GetRandomPointInNavigableRadius(RabbitLocation, Radius, NewLocation))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(
						GetSelectedBlackboardKey(),
						NewLocation.Location);
				}
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
