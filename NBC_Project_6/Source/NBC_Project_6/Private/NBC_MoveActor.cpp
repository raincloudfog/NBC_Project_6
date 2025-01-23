// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_MoveActor.h"




ANBC_MoveActor::ANBC_MoveActor()
{
}

void ANBC_MoveActor::BeginPlay()
{
	Super::BeginPlay();

	//먼저 시작시 위치 지정 //GetActorLocation() : 액터의 현재위치 
	// AActor::GetActorLocation();
	if (IsTest)
	{
		Init();
	}
	
}

void ANBC_MoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//1번 IsElevator로 구분하기 2번 핸들러 처럼 함수 넣어보기
	//하나의 함수안에 움직이는 코드가 들어있는것 혹은
	//두개의 함수안에 서로 다르게 움직이는 코드가 들어있게하기
	Move(DeltaTime);
	
}

void ANBC_MoveActor::Move(float DeltaTime)
{
	//이것 말고도 GetWorld()->DeltaTimeSecond 라는 방법이 있는 걸로앎
	
	if (IsTest)
	{
		MoveDirection = IsForward == true ? FVector::ForwardVector : FVector::RightVector;
		MoveDirection = IsElevator == true ? FVector::UpVector :
			MoveDirection;
	}

	//현재 위치와 시작 위치 비교 
	if (FVector::Distance(StartLocation, GetActorLocation()) > MaxRange)
	{
		//현재 거리가 너무 멀어졌으니 반대방향으로 움직이게
		MoveSpeed *= -1;
	}

	AddActorLocalOffset(MoveDirection * MoveSpeed * DeltaTime);
	//아래 방법을 하려면 FVector 변수 하나 만들어놓고 GetActorLocation().X혹은 YZ중 하나만 받아서 그값을 받은
	// 변수로 +해줘야해서 위의 방법을 채택 물론 이게 아니라면 바로 수정 해보는것도 가능
	//SetActorLocation(GetActorLocation() + (MoveDirection * MoveSpeed * DeltaTime));

}

void ANBC_MoveActor::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Warning, TEXT(" INIT 발동"));

	MoveSpeed = FMath::RandRange(-200.0, 200.0);
	MaxRange = FMath::RandRange(100.0, 200.0);
	IsForward = FMath::RandBool();
	IsElevator = FMath::RandBool();

	StartLocation = GetActorLocation();

	MoveDirection = IsForward == true ? FVector::ForwardVector : FVector::RightVector;
	MoveDirection = IsElevator == true ? FVector::UpVector :
		MoveDirection;
}


