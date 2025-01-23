// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBC_MoveMentActor.h"
#include "ActorObjectPool.generated.h"

UCLASS()
class NBC_PROJECT_6_API AActorObjectPool : public AActor
{
	GENERATED_BODY()
	
	//���� ���󵵴� ���丮 ������ ��������ϴ� Actor�� ������Ʈ Ǯ���� UObjcet�� �ΰ� ����ϰ�;����� �ʹ� �ڷᰡ �����Ƿ� ���ʿ�� �Ǵ�	

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
