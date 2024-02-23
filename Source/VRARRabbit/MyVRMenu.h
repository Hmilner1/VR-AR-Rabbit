#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyVRMenu.generated.h"

class UButton;
UCLASS()
class VRARRABBIT_API UMyVRMenu : public UUserWidget
{
public:
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UButton* ExitButton;

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UButton* ARButton;

protected:

private:
	
	GENERATED_BODY()
};
