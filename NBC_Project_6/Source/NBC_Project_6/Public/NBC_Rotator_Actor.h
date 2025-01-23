// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_MoveMentActor.h"
#include "NBC_Rotator_Actor.generated.h"

/**
 * 
 */
UCLASS()
class NBC_PROJECT_6_API ANBC_Rotator_Actor : public ANBC_MoveMentActor
{
	GENERATED_BODY()

public:
	ANBC_Rotator_Actor();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotator")
	float RotationSpeed;

	void Init() override;

private:

	void RotatorActor(float DeltaTime);
	void ChangeRotator();

	//���߿� �������̽��� ��ɱ��� �غ��°͵� ���
	FTimerHandle TestTimer;
	
};
