#include "MyVRMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UMyVRMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ARButton->OnPressed.AddDynamic(this,&UMyVRMenu::SwapVRMode);
	ExitButton->OnPressed.AddDynamic(this,&UMyVRMenu::ExitGame);
}

void UMyVRMenu::SwapVRMode()
{
	if(UGameplayStatics::GetCurrentLevelName(GetWorld(),true) == FName("VRTestLevel"))
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName("PassThrough"));
	}
	else
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName("VRTestLevel"));
	}
}

void UMyVRMenu::ExitGame()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PlayerController->ConsoleCommand("quit");
}



