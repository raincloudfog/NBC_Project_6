// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorObjectPool.h"

// Sets default values
AActorObjectPool::AActorObjectPool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ANBC_MoveMentActor* AActorObjectPool::GetActorObject()
{
	ANBC_MoveMentActor* Temp;

	if (Pool.Dequeue(Temp))
	{
		//AActor* activateActor = Cast<AActor>(Temp);  // 아래가 잘 작동되므로
		Temp->SetActorEnableCollision(true); // 액터 충돌 여부
		Temp->SetActorHiddenInGame(false);  // 액터 투명 여부
		return Temp;
	}
	else {
		
		for (int i = 0; i < 5; i++)
		{			
			int rand = FMath::RandRange(0, ActorObjects.Num() - 1);

			//복사 방법
			TSubclassOf<ANBC_MoveMentActor> SelectedClass  = ActorObjects[rand];

			//유효성 확인
			if (SelectedClass)
			{
				FVector SpawnLocation = FVector::ZeroVector;
				FRotator SpawnRotation = FRotator::ZeroRotator;

				//복제할 액터와 위치 방향선정
				ANBC_MoveMentActor* NewActor = GetWorld()->SpawnActor<ANBC_MoveMentActor>(SelectedClass,
					SpawnLocation, SpawnRotation);

				NewActor->SetActorEnableCollision(false);
				NewActor->SetActorHiddenInGame(true);

				Pool.Enqueue(NewActor);
			}
		}
		if (Pool.Dequeue(Temp))
		{
			//AActor* activateActor = Cast<AActor>(Temp);  // 아래가 잘 작동되므로
			Temp->SetActorEnableCollision(true); // 액터 충돌 여부
			Temp->SetActorHiddenInGame(false);  // 액터 투명 여부
			return Temp;
		}
	}

	return nullptr;
}

void AActorObjectPool::SetActorObject(ANBC_MoveMentActor* act)
{
}





