#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyVRMenu.generated.h"

class UButton;
UCLASS()
class VRARRABBIT_API UMyVRMenu : public UUserWidget
{
public:

protected:
	
	UFUNCTION()
	void SwapVRMode();
	UFUNCTION()
	void ExitGame();
	
	virtual void NativeConstruct() override;

	
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* ExitButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* ARButton;
private:
	
	GENERATED_BODY()
};
