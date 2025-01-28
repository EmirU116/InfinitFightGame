// Fill out your copyright notice in the Description page of Project Settings.


#include"BlastingComponent1.h"

// Sets default values for this component's properties
UBlastingComponent1::UBlastingComponent1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBlastingComponent1::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBlastingComponent1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBlastingComponent1::ShootingBlast(float Speed, UClass* blastMesh)
{
	// Create a projectile
	FVector Location = GetOwner()->GetActorForwardVector() + 25.f;
	FRotator Rotation = GetOwner()->GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	GetWorld()->SpawnActor<AActor>(blastMesh, Location, Rotation, SpawnInfo);

	UE_LOG(LogTemp, Warning, TEXT("Shooting Blast"));
}


