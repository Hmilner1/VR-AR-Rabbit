#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "MyVRMenu.h"
#include "VRPlayerUIBase.generated.h"

class UInputMappingContext;
class UEnhancedInputComponent;
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

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="UI Inputs, Menu Selection");
	TObjectPtr<UInputMappingContext> UiInputMapping = nullptr;

	UPROPERTY()
	class UWidgetInteractionComponent* RightWidgetIntract;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MenuCursor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Niagara")
	class UNiagaraSystem* NiagraMenuLine;
	
	UPROPERTY()
	class UNiagaraComponent* NiagraComponentMenuLine;
	
	UFUNCTION()
	void RemoveInputSystem();
	
	UFUNCTION()
	void MenuSelect();
	
	AVRPlayerUIBase();
protected:
	virtual void BeginPlay() override;
	class AVRPlayerPawn* PlayerPawn;
private:
	virtual void Tick(float DeltaTime) override;
	GENERATED_BODY()
};
