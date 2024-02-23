#include "VRPlayerUIBase.h"
#include "MyVRMenu.h"


AVRPlayerUIBase::AVRPlayerUIBase()
{
	PrimaryActorTick.bCanEverTick = true;
	NewRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Menu Origin"));
	RootComponent = NewRoot;

	PlayerUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("MyWidgetComponent"));
	PlayerUI->SetupAttachment(NewRoot);
}

void AVRPlayerUIBase::BeginPlay()
{
	Super::BeginPlay();
	
	if (UIWidgetClass)
	{
		PlayerUI->SetWidgetClass(UIWidgetClass);
		PlayerUI->SetWidgetSpace(EWidgetSpace::World);
		PlayerUI->SetDrawSize(FVector2D(1920.f, 1080.f));
	}
}

void AVRPlayerUIBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}