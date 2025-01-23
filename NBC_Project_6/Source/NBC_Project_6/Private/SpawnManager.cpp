// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
}

void ASpawnManager::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	CheckActorMeshMax();
}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();

	Init();
	//GetWorld()->GetTimerManager()->SetTimer()
	// 잘못 이해하고있던점 핸들러, 객체 , 함수 , 여기서 이제 반복시간!!!, 반복여부 , 여기서 이제 처음 시작 시간!!
	GetWorld()->GetTimerManager().SetTimer(Timer, this, &ASpawnManager::Init, 10.0f, true, 5.0f);
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnManager::ActorPosition(AActor* Act)
{
	//-300부터 300까지의 범위중 랜덤으로 소환
	FVector RandPosition = FVector(
		FMath::FRandRange(-MapSize, MapSize),
		FMath::FRandRange(-MapSize, MapSize),
		FMath::FRandRange(-MapSize, MapSize)
	);

	Act->SetActorLocation(RandPosition);
	
	//TSubclassOf<AActor> ActorToSpawn;

	//if (ActorToSpawn)
	//{
	//	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(ActorToSpawn, randPosition, FRotator(0, 0, 0));
	//}
}

void ASpawnManager::Init()
{
	////TArray.Num() : 배열의 크기	
	//for (int i = 0; i < Actors.Num(); i++)
	//{
	//	ActorPool->SetActorObject(Actors[i]);
	//	Actors.Remove(Actors[i]);
	//}

	//이 내부에서도 기다리는 시간함수 있나 찾아보기 

	//20개 정도 배치하기 // 이거 나중가면 위험할거같다 너무 많은 액터 소환이라
	//나중에 비동기? 방식 생각해보기
	if (Actors.Num() < 1) {
		for (int i = 0; i < 20; i++)
		{
			//과제 7번을 위해 여기서 싱글톤 등 하고싶은 내용은 따로 구현 
			Actors.Add(ActorPool->GetActorObject());

		}
	}
	

	for (ANBC_MoveMentActor* actor : Actors)
	{
		ActorPosition(actor);
		actor->Init();
	}

	
}


// -미구현- 과제 제출 기한 지켜야 되므로 기능 보류
//메쉬의 크기 계산후 오브젝트들간 거리 벌리려고 시도 하려했음.
void ASpawnManager::CheckActorMeshMax()
{
	//x y z 값중 최소 최대 값 구하고 
	//그 중간 정도에 스폰 해야되나 구상
	
	for (ANBC_MoveMentActor* i : Actors)
	{
		//메쉬 보유 확인 
		if (i->StaticMeshComp)
		{
			//GEtLocalbouds : 매개변수로 넘겨준 변수들이 바뀌는구조 로컬공간에서 중심인 Origin, 메쉬의 크기 의 반지름 BoxExtent
			
			FVector BoxExtent;
			FVector Origin;
			i->StaticMeshComp->GetLocalBounds(Origin, BoxExtent);
			
			DistanceObject = BoxExtent.X * 2;
		}

	}

}

