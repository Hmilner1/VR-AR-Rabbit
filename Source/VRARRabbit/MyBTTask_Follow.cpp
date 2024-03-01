#include "MyBTTask_Follow.h"
#include "NavigationSystem.h"
#include "VRPlayerPawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UMyBTTask_Follow::UMyBTTask_Follow(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Follow Player";
}

EBTNodeResult::Type UMyBTTask_Follow::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if(auto* const Player = UGameplayStatics::GetPlayerPawn(GetWorld(),0))
	{
		FVector PlayerLocation =  Player->GetActorLocation();
		if(Search)
		{
			FNavLocation NewLocation;
			
			if(UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				if(NavSystem->GetRandomPointInNavigableRadius(PlayerLocation,Radius, NewLocation))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), NewLocation.Location);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
			}
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
