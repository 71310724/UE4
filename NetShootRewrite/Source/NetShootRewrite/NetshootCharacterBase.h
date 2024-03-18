// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NetshootCharacterBase.generated.h"

UCLASS()
class NETSHOOTREWRITE_API ANetshootCharacterBase : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(Category=Character, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	class UCameraComponent*  PlayerCamera;

	UPROPERTY(Category=Character, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	class USkeletalMeshComponent*  FPArmMesh;


protected:
	// Sets default values for this character's properties
	ANetshootCharacterBase();

	
	 void MoveForward(float AxisValue);
	void  MoveRight(float AxisValue);

	
	void  JumpAction();
	
	void JumpStop();
	void LowSpeedWalik();
	void NormalSpeedWalik();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(Server,Reliable,WithValidation)
	void ServerLowSpeedWalk();
	bool ServerLowSpeedWalk_Validate();
	void ServerLowSpeedWalk_Implementation();
	
	UFUNCTION(Server,Reliable,WithValidation)
	void ServerNormalSpeedWalk();
	bool ServerNormalSpeedWalk_Validate();
	void  ServerNormalSpeedWalk_Implementation();
	
	UFUNCTION(Client,Reliable)
	void ClientEquitFPArmPrimary();
	void  ClientEquitFPArmPrimary_Implementation();
	
	
	void EquipPrimary(class AWeaponServerBase* ServerWeapon);


private:
    UPROPERTY(meta=(AllowPrivateAccess = "true"))
	class AWeaponServerBase* ServerWeaponBase;

	UPROPERTY(meta=(AllowPrivateAccess = "true"))
	class AWeaponClientBase* ClientWeaponeBase;
    
};
