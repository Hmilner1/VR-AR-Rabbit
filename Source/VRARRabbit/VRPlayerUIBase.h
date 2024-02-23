#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "MyVRMenu.h"
#include "VRPlayerUIBase.generated.h"

UCLASS()
class VRARRABBIT_API AVRPlayerUIBase : public AActor
{
public:
	UPROPERTY()
	TObjectPtr<class USceneComponent> NewRoot;

	UPROPERTY()
	UWidgetComponent* PlayerUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	TSubclassOf<UMyVRMenu> UIWidgetClass;
	
	AVRPlayerUIBase();
protected:
	virtual void BeginPlay() override;
public:	

	virtual void Tick(float DeltaTime) override;
	GENERATED_BODY()
};
