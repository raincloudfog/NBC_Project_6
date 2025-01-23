// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_MoveMentActor.h"

// Sets default values
ANBC_MoveMentActor::ANBC_MoveMentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Super::가 없어도 생성자는 자동 실행됨!

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(SceneRoot);

}

// Called when the game starts or when spawned
void ANBC_MoveMentActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANBC_MoveMentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANBC_MoveMentActor::Init()
{
}

