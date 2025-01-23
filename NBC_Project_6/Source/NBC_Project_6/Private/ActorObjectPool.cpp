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
		//AActor* activateActor = Cast<AActor>(Temp);  // �Ʒ��� �� �۵��ǹǷ�
		Temp->SetActorEnableCollision(true); // ���� �浹 ����
		Temp->SetActorHiddenInGame(false);  // ���� ���� ����
		return Temp;
	}
	else {
		
		for (int i = 0; i < 5; i++)
		{			
			int rand = FMath::RandRange(0, ActorObjects.Num() - 1);

			//���� ���
			TSubclassOf<ANBC_MoveMentActor> SelectedClass  = ActorObjects[rand];

			//��ȿ�� Ȯ��
			if (SelectedClass)
			{
				FVector SpawnLocation = FVector::ZeroVector;
				FRotator SpawnRotation = FRotator::ZeroRotator;

				//������ ���Ϳ� ��ġ ���⼱��
				ANBC_MoveMentActor* NewActor = GetWorld()->SpawnActor<ANBC_MoveMentActor>(SelectedClass,
					SpawnLocation, SpawnRotation);

				NewActor->SetActorEnableCollision(false);
				NewActor->SetActorHiddenInGame(true);

				Pool.Enqueue(NewActor);
			}
		}
		if (Pool.Dequeue(Temp))
		{
			//AActor* activateActor = Cast<AActor>(Temp);  // �Ʒ��� �� �۵��ǹǷ�
			Temp->SetActorEnableCollision(true); // ���� �浹 ����
			Temp->SetActorHiddenInGame(false);  // ���� ���� ����
			return Temp;
		}
	}

	return nullptr;
}

void AActorObjectPool::SetActorObject(ANBC_MoveMentActor* act)
{
}





