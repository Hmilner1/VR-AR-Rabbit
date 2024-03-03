#include "Rabbit_AiController.h"
#include "RabbitAICharacter.h"
#include "VRPlayerPawn.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Hearing.h"

ARabbit_AiController::ARabbit_AiController(FObjectInitializer const& ObjectInitializer)
{
	RabbitSightSetup();
	RabbitHearingSetup();
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
		RabbitSight->SightRadius = RabbitSightRadius;
		RabbitSight->LoseSightRadius = RabbitLoseRadius;
		RabbitSight->PeripheralVisionAngleDegrees = RabbitVisionAngle;
		RabbitSight->SetMaxAge(5.0f);
		RabbitSight->AutoSuccessRangeFromLastSeenLocation = 70.f;
		RabbitSight->DetectionByAffiliation.bDetectNeutrals = true;
		RabbitSight->DetectionByAffiliation.bDetectFriendlies = true;
		RabbitSight->DetectionByAffiliation.bDetectEnemies = true;

		//GetPerceptionComponent()->SetDominantSense(*RabbitSight->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &ARabbit_AiController::OnTargetSeen);
		GetPerceptionComponent()->ConfigureSense(*RabbitSight);
	}
}

void ARabbit_AiController::RabbitHearingSetup()
{
	RabbitHearing = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
	if(RabbitHearing)
	{
		RabbitHearing->HearingRange = RabbitHearingRage;
		RabbitHearing->DetectionByAffiliation.bDetectNeutrals = true;
		RabbitHearing->DetectionByAffiliation.bDetectFriendlies = true;
		RabbitHearing->DetectionByAffiliation.bDetectEnemies = true;

		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &ARabbit_AiController::OnTargetHeard);
		GetPerceptionComponent()->ConfigureSense(*RabbitHearing);
		
	}
}

void ARabbit_AiController::OnTargetSeen(AActor* Player, FAIStimulus const Stimulus)
{
	if(AVRPlayerPawn* const PlayerPawn = Cast<AVRPlayerPawn>(Player))
	{
		GetBlackboardComponent()->SetValueAsBool("PlayerSeen", Stimulus.WasSuccessfullySensed());
	}
}

void ARabbit_AiController::OnTargetHeard(AActor* Player, FAIStimulus const Stimulus)
{
	if(AVRPlayerPawn* const PlayerPawn = Cast<AVRPlayerPawn>(Player))
	{
		GetBlackboardComponent()->SetValueAsBool("PlayerHeard", Stimulus.WasSuccessfullySensed());
	}
}
