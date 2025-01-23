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
	
	//�Ű����� 
	// �ڵ鷯, Ÿ�̸Ӱ� ȣ���� �Լ��� �ִ� ��ä, ȣ���� �Լ�, Ÿ�̸� ó�� �ɸ��� �ð� , �ݺ� ���� , �ݺ��� �ð� (�⺻������ 1.0f�̶�� ��.)
	
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

