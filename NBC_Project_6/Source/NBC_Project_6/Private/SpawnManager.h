// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <NBC_MoveMentActor.h>
#include <ActorObjectPool.h>
#include "SpawnManager.generated.h"

UCLASS()
class ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

	//���� �����ڿ��� �޽��� �����ؾ� ���� �ƴϸ� ��� �÷��� ����
	//�����ؾ����� ���ؾ� �� �Ͱ���. ������Ʈ�� ���õȰŴ� ������
	//postint... �� ����ϴ°͵� ���ƺ��δ�!
	virtual void PostInitializeComponents() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:	

	//BPŬ������ �������� ���� ���
	/*UPROPERTY(EditAnywhere, Category = "OtherObject|Object")
	TArray<TSubclassOf<ANBC_MoveMentActor>> MovementClass;*/

	UPROPERTY(EditAnywhere, Category = "OtherObject|Object")
	//�����ͷ� ����� ������ �ȳ��ɴϴ� 
	//������ ���� ������ �����غ���
	//�ѹ� ����� �������ų� �ʿ�������� �������� ���ø޸𸮿�
	//������ �ٽ� ����ؾߵǰ� �ٸ��������� ���ǾߵǴ°� ���޸� �� �����͸� ����ؼ� �����ϴ°� �����ͼ� ����ϴ� ��
	TArray<ANBC_MoveMentActor*> Actors;

	UPROPERTY(VisibleAnywhere, Category = "NBC_Project|distance")
	float DistanceObject = 0;


	UPROPERTY(EditInstanceOnly, Category = "NBC_Project|MapSize")
	double MapSize;



	void Init();
	
	//������ private�� �� Ŭ������ ������ ������ ��� ����� ã�����ߴ�
	//�ּ��Է� ���� (���� FString���� ������ �ּҸ� ��ƵѼ� �ֱ��ϰ�����)
	//���� ���� ����� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ObjectPool")
	AActorObjectPool* ActorPool;

private:
	

	//�ش� �Լ��� ��ȯ�� ������ ũ�⸦ �� �� �ֽ��ϴ�.
	void CheckActorMeshMax();	

	//���� ��ġ�ϱ� //�̹� ��ġ�صл��¿��� ������ ����
	//������ �뷱�� ������ �ȳ��� ��Ȳ!!
	void ActorPosition(AActor* Act);

	FTimerHandle Timer;
};
