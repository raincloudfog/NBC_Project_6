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
	// �߸� �����ϰ��ִ��� �ڵ鷯, ��ü , �Լ� , ���⼭ ���� �ݺ��ð�!!!, �ݺ����� , ���⼭ ���� ó�� ���� �ð�!!
	GetWorld()->GetTimerManager().SetTimer(Timer, this, &ASpawnManager::Init, 10.0f, true, 5.0f);
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnManager::ActorPosition(AActor* Act)
{
	//-300���� 300������ ������ �������� ��ȯ
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
	////TArray.Num() : �迭�� ũ��	
	//for (int i = 0; i < Actors.Num(); i++)
	//{
	//	ActorPool->SetActorObject(Actors[i]);
	//	Actors.Remove(Actors[i]);
	//}

	//�� ���ο����� ��ٸ��� �ð��Լ� �ֳ� ã�ƺ��� 

	//20�� ���� ��ġ�ϱ� // �̰� ���߰��� �����ҰŰ��� �ʹ� ���� ���� ��ȯ�̶�
	//���߿� �񵿱�? ��� �����غ���
	if (Actors.Num() < 1) {
		for (int i = 0; i < 20; i++)
		{
			//���� 7���� ���� ���⼭ �̱��� �� �ϰ���� ������ ���� ���� 
			Actors.Add(ActorPool->GetActorObject());

		}
	}
	

	for (ANBC_MoveMentActor* actor : Actors)
	{
		ActorPosition(actor);
		actor->Init();
	}

	
}


// -�̱���- ���� ���� ���� ���Ѿ� �ǹǷ� ��� ����
//�޽��� ũ�� ����� ������Ʈ�鰣 �Ÿ� �������� �õ� �Ϸ�����.
void ASpawnManager::CheckActorMeshMax()
{
	//x y z ���� �ּ� �ִ� �� ���ϰ� 
	//�� �߰� ������ ���� �ؾߵǳ� ����
	
	for (ANBC_MoveMentActor* i : Actors)
	{
		//�޽� ���� Ȯ�� 
		if (i->StaticMeshComp)
		{
			//GEtLocalbouds : �Ű������� �Ѱ��� �������� �ٲ�±��� ���ð������� �߽��� Origin, �޽��� ũ�� �� ������ BoxExtent
			
			FVector BoxExtent;
			FVector Origin;
			i->StaticMeshComp->GetLocalBounds(Origin, BoxExtent);
			
			DistanceObject = BoxExtent.X * 2;
		}

	}

}

