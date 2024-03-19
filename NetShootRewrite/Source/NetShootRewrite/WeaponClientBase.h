// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponClientBase.generated.h"

UCLASS()
class NETSHOOTREWRITE_API AWeaponClientBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponClientBase();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION( BlueprintImplementableEvent,Category=FPSAnimtion)
		void PlayAnimation();

	UFUNCTION()
	void DisplayWeaponEffect();
protected:
	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent*  WeaponClientAcotr;


public:
	UPROPERTY(EditAnywhere)
	class UAnimMontage* ClientArmFireAnimMontage;

	UPROPERTY(EditAnywhere)
	class USoundBase*  Sound2D;

	UPROPERTY(EditAnywhere)
	class UParticleSystem*  FireClientPartical;

	UPROPERTY(EditAnywhere)
    TSubclassOf<class UCameraShakeBase>	 CameraShakeClass ;

};
