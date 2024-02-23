#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "VRPlayerUIBase.generated.h"

class UMyVRMenu;
class UUserWidget;
UCLASS()
class VRARRABBIT_API AVRPlayerUIBase : public AActor
{
public:
	UPROPERTY()
	TObjectPtr<class USceneComponent> DummyRoot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Menu Widget")
	UUserWidget* UIWidget;

	UPROPERTY()
	UMyVRMenu* PlayerUI;
	
	AVRPlayerUIBase();

protected:
	
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;
	GENERATED_BODY()
};
