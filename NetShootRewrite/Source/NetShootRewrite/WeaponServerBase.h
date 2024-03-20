// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponServerBase.generated.h"

UENUM(BlueprintType)
enum   class EWeaponType:uint8
{
	Ak47  UMETA(DisplayName=“Ak47”),
	DesertEagle   UMETA(DisplayName=“DesertEagle”)
};

UCLASS()
class NETSHOOTREWRITE_API AWeaponServerBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponServerBase();
    UPROPERTY(EditAnywhere)
	EWeaponType  KindofWeapon;
      UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponClientBase>  WeaponClient;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
   UFUNCTION()
	void OnComponetBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION(NetMulticast,Reliable,WithValidation)
	void MuliticastShootingEffect();
	void MuliticastShootingEffect_Implementation();
	bool MuliticastShootingEffect_Validate();
	

	UPROPERTY(EditAnywhere)
	int32 GunCurrentAmmon;   //枪体总的子弹

	UPROPERTY(EditAnywhere)
	int32  ClipCurrentAmmon;  //当前弹夹子弹

	UPROPERTY(EditAnywhere)
	int32  ClipMaxAmmon;
	
protected:
  UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent*  ServerWeaponMesh;
	UPROPERTY(EditAnywhere)
	class USphereComponent*  SphereCollision;

	UPROPERTY(EditAnywhere)
	class UParticleSystem*  FireServerPartical;

	UPROPERTY(EditAnywhere)
	class USoundBase*  Sound3D;

	
};

 


