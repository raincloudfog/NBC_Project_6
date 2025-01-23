// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorActorObject.h"

// Sets default values
ARotatorActorObject::ARotatorActorObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotatorActorObject::BeginPlay()
{
	Super::BeginPlay();
	
	//매개변수 
	// 핸들러, 타이머가 호출할 함수가 있는 객채, 호출할 함수, 타이머 처음 걸리는 시간 , 반복 여부 , 반복할 시간 (기본적으로 1.0f이라고 함.)
	
	GetWorld()->GetTimerManager().SetTimer(TestTimer, this, &ARotatorActorObject::ChangeRotator, 1.0f, true, 5.0f);
}

// Called every frame
void ARotatorActorObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotatorActor(DeltaTime);
}

void ARotatorActorObject::RotatorActor(float DeltaTime)
{
	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}

}

void ARotatorActorObject::ChangeRotator()
{
	RotationSpeed *= -1;
}

