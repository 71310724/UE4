// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponClientBase.h"

#include "Kismet/GameplayStatics.h"
#define   LOG(X)    UE_LOG(LogTemp,Warning,TEXT("X"))

// Sets default values
AWeaponClientBase::AWeaponClientBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponClientAcotr=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponClientAcotr"));
	RootComponent=WeaponClientAcotr;
	WeaponClientAcotr->SetOnlyOwnerSee(true);
	
}

// Called when the game starts or when spawned
void AWeaponClientBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponClientBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponClientBase::DisplayWeaponEffect()
{
	UGameplayStatics::PlaySound2D(GetWorld(),Sound2D);
	// LOG("播放声音");
	UE_LOG(LogTemp,Log,TEXT("播放射击声音"));

	UGameplayStatics::SpawnEmitterAttached(FireClientPartical,WeaponClientAcotr,TEXT("Muzzle"));
	
}

