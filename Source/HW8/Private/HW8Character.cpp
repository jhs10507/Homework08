// Fill out your copyright notice in the Description page of Project Settings.


#include "HW8Character.h"

// Sets default values
AHW8Character::AHW8Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHW8Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHW8Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHW8Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

