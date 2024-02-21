// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "VRTeleportBase.generated.h"

class UNiagaraSystem;

UCLASS()
class VRARRABBIT_API AVRTeleportBase : public AActor
{
public:	
	AVRTeleportBase();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Niagara")
	UNiagaraSystem* NiagraPlayerBounds;

	UPROPERTY()
	UNiagaraComponent* NiagraComponentPlayerBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Niagara")
	UNiagaraSystem* NiagraPlayerRing;

	UPROPERTY()
	UNiagaraComponent* NiagraComponentPlayerRing;

	
	
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	GENERATED_BODY()

};
