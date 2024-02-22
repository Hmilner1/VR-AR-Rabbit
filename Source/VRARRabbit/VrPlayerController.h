#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "VrPlayerController.generated.h"

class UInputMappingContext;
class UEnhancedInputComponent;
class AVRPlayerPawn;

UCLASS(Abstract)
class VRARRABBIT_API AVrPlayerController : public APlayerController
{

public:
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Inputs, Movement");
	TObjectPtr<UInputAction> ActionMove = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Inputs, Turn");
	TObjectPtr<UInputAction> ActionTurn = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Inputs, Open Menu Left");
	TObjectPtr<UInputAction> ActionMenuLeft = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Inputs, Open Menu Right");
	TObjectPtr<UInputAction> ActionMenuRight = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Player Inputs, Movement");
	TObjectPtr<UInputMappingContext> InputMappingContext = nullptr;
protected:
	void HandleStartMove(const FInputActionValue& InputActionValue);
	void HandleTriggerMove(const FInputActionValue& InputActionValue);
	void HandleCompletedTrigger(const FInputActionValue& InputActionValue);
	void HandleTurn(const FInputActionValue& InputActionValue);
	void HandleMenuLeft(const FInputActionValue& InputActionValue);
	void HandleMenuRight(const FInputActionValue& InputActionValue);

	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;
private:
	UPROPERTY()
	TObjectPtr<UEnhancedInputComponent> VRInputController = nullptr;
	UPROPERTY()
	TObjectPtr<AVRPlayerPawn> VRPawn = nullptr;
	
	GENERATED_BODY()
};
