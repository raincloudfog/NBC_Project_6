// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatorActorObject.generated.h"

UCLASS()
class NBC_PROJECT_6_API ARotatorActorObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatorActorObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotator|Component")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotator|Component")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotator|Float")
	float RotationSpeed;


private:
	void RotatorActor(float DeltaTime);
	void ChangeRotator();

	FTimerHandle TestTimer;

};
