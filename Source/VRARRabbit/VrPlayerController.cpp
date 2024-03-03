#include "VrPlayerController.h"
#include "VRPlayerPawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void AVrPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	
	VRPawn = Cast<AVRPlayerPawn>(aPawn);
	checkf(VRPawn,TEXT("VRPawn dervied classes should only posses VRPawn derived pawns"));

	VRInputController = Cast<UEnhancedInputComponent>(InputComponent);
	checkf(VRInputController, TEXT("Unable t get a reference to the EnhancedInputComponent"));

	InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	checkf(InputSubsystem, TEXT("Unable to get reference to the EnhancedInputLocalPlayerSubsystem."));

	checkf(InputMappingContext, TEXT("InputMappingContent was not specified."));
	InputSubsystem->ClearAllMappings();
	InputSubsystem->AddMappingContext(InputMappingContext, 0);

	if(ActionMove)
	{
		VRInputController->BindAction(ActionMove, ETriggerEvent::Triggered, this, &AVrPlayerController::HandleTriggerMove);
		VRInputController->BindAction(ActionMove, ETriggerEvent::Started, this, &AVrPlayerController::HandleStartMove);
		VRInputController->BindAction(ActionMove, ETriggerEvent::Completed, this, &AVrPlayerController::HandleCompletedTrigger);
	}
	if(ActionTurn)
	{
		VRInputController->BindAction(ActionTurn, ETriggerEvent::Started, this, &AVrPlayerController::HandleTurn);
	}
	if(ActionMenuLeft)
	{
		VRInputController->BindAction(ActionMenuLeft, ETriggerEvent::Started, this, &AVrPlayerController::HandleMenu);
		VRInputController->BindAction(ActionMenuRight, ETriggerEvent::Started, this, &AVrPlayerController::HandleMenu);
	}
	if(ActionSelect)
	{
		VRInputController->BindAction(ActionSelect, ETriggerEvent::Triggered, this, &AVrPlayerController::HandleSelect);
	}
	if(ActionWhistle)
	{
		VRInputController->BindAction(ActionWhistle, ETriggerEvent::Triggered, this, &AVrPlayerController::HandleWhistle);
	}

}

void AVrPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
}

void AVrPlayerController::HandleTriggerMove(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	if (VRPawn)
	{
		VRPawn->MoveTriggered();
	}
}

void AVrPlayerController::HandleStartMove(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	if (VRPawn)
	{
		VRPawn->MoveStarted();
	}
}


void AVrPlayerController::HandleCompletedTrigger(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	if (VRPawn)
	{
		VRPawn->MoveCompleted();
	}
}

void AVrPlayerController::HandleTurn(const FInputActionValue& InputActionValue)
{
	const double InputAmount = InputActionValue.Get<float>();
	if (VRPawn)
	{
		VRPawn->TurnStarted(InputAmount);
	}
}

void AVrPlayerController::HandleMenu(const FInputActionValue& InputActionValue)
{
	if(VRPawn)
	{
		VRPawn->HandleMenu();
	}
}

void AVrPlayerController::HandleSelect(const FInputActionValue& InputActionValue)
{
	if(VRPawn)
	{
		VRPawn->PlayerUIActor->MenuSelect();
	}
}

void AVrPlayerController::HandleWhistle(const FInputActionValue& InputActionValue)
{
	if(VRPawn)
	{
		VRPawn->HandleWhistle();
	}
}

