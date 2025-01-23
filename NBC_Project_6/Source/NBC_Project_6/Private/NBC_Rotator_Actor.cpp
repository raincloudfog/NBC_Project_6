// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_Rotator_Actor.h"

ANBC_Rotator_Actor::ANBC_Rotator_Actor()
{
}

void ANBC_Rotator_Actor::BeginPlay()
{
	Super::BeginPlay();
}

void ANBC_Rotator_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotatorActor(DeltaTime);
}

void ANBC_Rotator_Actor::Init()
{
	//FRotator에서는 FVector처럼 Forward 같은 함수는 없는 듯 하다.
	int32 rand =  FMath::RandRange(0, 360);
	RotationSpeed = rand;
}

void ANBC_Rotator_Actor::RotatorActor(float DeltaTime)
{
	//0인데 소수점이 남아있는지체크?
	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}
}

void ANBC_Rotator_Actor::ChangeRotator()
{
	RotationSpeed *= -1;
}
