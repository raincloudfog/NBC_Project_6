// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_MoveMentActor.h"
#include "ActorObjectPool.generated.h"

UCLASS()
class NBC_PROJECT_6_API AActorObjectPool : public AActor
{
	GENERATED_BODY()
	
	//원래 구상도는 팩토리 패턴을 기반으로하는 Actor에 오브젝트 풀링을 UObjcet로 두고 사용하고싶었으나 너무 자료가 적으므로 불필요라 판단	

public:	
	// Sets default values for this actor's properties
	AActorObjectPool();

	ANBC_MoveMentActor* GetActorObject();

	void SetActorObject(ANBC_MoveMentActor* act);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object")
	TArray<TSubclassOf<ANBC_MoveMentActor>> ActorObjects;
	

private:

	TQueue<ANBC_MoveMentActor*> Pool;

};
