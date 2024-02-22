#include "VRPlayerUIBase.h"


AVRPlayerUIBase::AVRPlayerUIBase()
{
	PrimaryActorTick.bCanEverTick = true;
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Menu Origin"));
	RootComponent = DummyRoot;
	

}


void AVRPlayerUIBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AVRPlayerUIBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

