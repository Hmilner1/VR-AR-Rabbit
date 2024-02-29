// Fill out your copyright notice in the Description page of Project Settings.


#include "RabbitAICharacter.h"

// Sets default values
ARabbitAICharacter::ARabbitAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARabbitAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARabbitAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARabbitAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

