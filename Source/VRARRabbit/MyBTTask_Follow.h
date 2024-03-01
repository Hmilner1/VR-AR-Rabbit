// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_Follow.generated.h"

/**
 * 
 */
UCLASS()
class VRARRABBIT_API UMyBTTask_Follow : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	explicit UMyBTTask_Follow(FObjectInitializer const& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	bool Search = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	float Radius = 150.f;
	
};
