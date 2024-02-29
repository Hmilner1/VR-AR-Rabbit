// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
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
	
	
};
