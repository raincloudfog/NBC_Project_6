// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_MoveMentActor.h"
#include "NBC_MoveActor.generated.h"

/**
 * 
 */
UCLASS()
class NBC_PROJECT_6_API ANBC_MoveActor : public ANBC_MoveMentActor
{
	GENERATED_BODY()
	

public:
	ANBC_MoveActor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void Move(float DeltaTime);

	void Init() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NBC_Move")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NBC_Move")
	float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NBC_Move")
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NBC_Move")
	bool IsForward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NBC_Move")
	bool IsElevator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NBC_Move")
	bool IsTest;

private:
	FVector MoveDirection;
};
