// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NBC_MoveMentActor.generated.h"

UCLASS()
class NBC_PROJECT_6_API ANBC_MoveMentActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANBC_MoveMentActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//U!! 꼭붙힐것
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveMent|Components")
	USceneComponent* SceneRoot;

	//언리얼에서 U F A등은 98퍼센트 있을거라 믿으며 확인할것
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveMent|Components")
	UStaticMeshComponent* StaticMeshComp;

	virtual void Init();

};
