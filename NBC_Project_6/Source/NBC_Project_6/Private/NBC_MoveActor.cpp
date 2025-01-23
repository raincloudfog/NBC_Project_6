// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_MoveActor.h"




ANBC_MoveActor::ANBC_MoveActor()
{
}

void ANBC_MoveActor::BeginPlay()
{
	Super::BeginPlay();

	//���� ���۽� ��ġ ���� //GetActorLocation() : ������ ������ġ 
	// AActor::GetActorLocation();
	if (IsTest)
	{
		Init();
	}
	
}

void ANBC_MoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//1�� IsElevator�� �����ϱ� 2�� �ڵ鷯 ó�� �Լ� �־��
	//�ϳ��� �Լ��ȿ� �����̴� �ڵ尡 ����ִ°� Ȥ��
	//�ΰ��� �Լ��ȿ� ���� �ٸ��� �����̴� �ڵ尡 ����ְ��ϱ�
	Move(DeltaTime);
	
}

void ANBC_MoveActor::Move(float DeltaTime)
{
	//�̰� ���� GetWorld()->DeltaTimeSecond ��� ����� �ִ� �ɷξ�
	
	if (IsTest)
	{
		MoveDirection = IsForward == true ? FVector::ForwardVector : FVector::RightVector;
		MoveDirection = IsElevator == true ? FVector::UpVector :
			MoveDirection;
	}

	//���� ��ġ�� ���� ��ġ �� 
	if (FVector::Distance(StartLocation, GetActorLocation()) > MaxRange)
	{
		//���� �Ÿ��� �ʹ� �־������� �ݴ�������� �����̰�
		MoveSpeed *= -1;
	}

	AddActorLocalOffset(MoveDirection * MoveSpeed * DeltaTime);
	//�Ʒ� ����� �Ϸ��� FVector ���� �ϳ� �������� GetActorLocation().XȤ�� YZ�� �ϳ��� �޾Ƽ� �װ��� ����
	// ������ +������ؼ� ���� ����� ä�� ���� �̰� �ƴ϶�� �ٷ� ���� �غ��°͵� ����
	//SetActorLocation(GetActorLocation() + (MoveDirection * MoveSpeed * DeltaTime));

}

void ANBC_MoveActor::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Warning, TEXT(" INIT �ߵ�"));

	MoveSpeed = FMath::RandRange(-200.0, 200.0);
	MaxRange = FMath::RandRange(100.0, 200.0);
	IsForward = FMath::RandBool();
	IsElevator = FMath::RandBool();

	StartLocation = GetActorLocation();

	MoveDirection = IsForward == true ? FVector::ForwardVector : FVector::RightVector;
	MoveDirection = IsElevator == true ? FVector::UpVector :
		MoveDirection;
}


