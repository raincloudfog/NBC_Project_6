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

	//현재 생성자에서 메쉬를 감지해야 할지 아니면 비긴 플레이 에서
	//감지해야할지 정해야 할 것같다. 컴포넌트와 관련된거니 오히려
	//postint... 을 사용하는것도 좋아보인다!
	virtual void PostInitializeComponents() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:	

	//BP클래스를 가져오기 위한 방법
	/*UPROPERTY(EditAnywhere, Category = "OtherObject|Object")
	TArray<TSubclassOf<ANBC_MoveMentActor>> MovementClass;*/

	UPROPERTY(EditAnywhere, Category = "OtherObject|Object")
	//포인터로 해줘야 오류가 안나옵니다 
	//포인터 쓰는 이유를 생각해보면
	//한번 사용후 버려지거나 필요없어지는 변수들은 스택메모리에
	//언젠가 다시 사용해야되고 다른곳에서도 사용되야되는건 힙메모리 즉 포인터를 사용해서 존재하는걸 가져와서 사용하는 것
	TArray<ANBC_MoveMentActor*> Actors;

	UPROPERTY(VisibleAnywhere, Category = "NBC_Project|distance")
	float DistanceObject = 0;


	UPROPERTY(EditInstanceOnly, Category = "NBC_Project|MapSize")
	double MapSize;



	void Init();
	
	//아직은 private로 이 클래스를 가져올 마음에 드는 방식을 찾지못했다
	//주소입력 말고 (물론 FString같은 변수에 주소를 담아둘수 있긴하겠지만)
	//좀더 좋은 방식이 있을것
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ObjectPool")
	AActorObjectPool* ActorPool;

private:
	

	//해당 함수로 소환할 액터의 크기를 알 수 있습니다.
	void CheckActorMeshMax();	

	//액터 배치하기 //이미 배치해둔상태에서 랜덤값 지정
	//도저히 밸런스 생각이 안나는 상황!!
	void ActorPosition(AActor* Act);

	FTimerHandle Timer;
};
