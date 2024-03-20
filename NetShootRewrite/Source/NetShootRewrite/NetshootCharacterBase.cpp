// Fill out your copyright notice in the Description page of Project Settings.


#include "NetshootCharacterBase.h"

#include "WeaponClientBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WeaponServerBase.h"
#include "GameFramework/GameSession.h"
#include "NetShootPlayerController.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ANetshootCharacterBase::ANetshootCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	PlayerCamera=CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	FPArmMesh=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPArmMesh"));
	PlayerCamera->SetupAttachment(RootComponent);
	FPArmMesh->SetupAttachment(PlayerCamera);
	FPArmMesh->SetOnlyOwnerSee(true);
     GetMesh()->SetOwnerNoSee(true);

	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	PlayerCamera->bUsePawnControlRotation=true;

	
	
}

void ANetshootCharacterBase::MoveForward(float AxisValue)
{
	
	AddMovementInput(GetActorForwardVector(),AxisValue,false);
}

void ANetshootCharacterBase::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector(),AxisValue,false);
}

void ANetshootCharacterBase::InputFirePressed()
{
	switch (ActiveWeapon)
	{
	case EWeaponType::Ak47: FireWeaponPrimary();
		break;
	}
}

void ANetshootCharacterBase::InputFireRelease()
{
	switch (ActiveWeapon)
	{
	case EWeaponType::Ak47: StopFirePrimary();
		break;
	}
}

void ANetshootCharacterBase::JumpAction()
{
	Jump();
	JumpKeyHoldTime=0;
}

void ANetshootCharacterBase::JumpStop()
{
	StopJumping();
}

void ANetshootCharacterBase::LowSpeedWalik()
{
	GetCharacterMovement()->MaxWalkSpeed=300;
	ServerLowSpeedWalk();
}

void ANetshootCharacterBase::NormalSpeedWalik()
{
	GetCharacterMovement()->MaxWalkSpeed=500;
	ServerNormalSpeedWalk();
	
}


// Called when the game starts or when spawned
void ANetshootCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	StartWitKindofWeapon();

	ClientArmAnimWEapon=FPArmMesh->GetAnimInstance();

	NetPlayerController=Cast<ANetShootPlayerController>(GetController());

	if (NetPlayerController)
	{
		NetPlayerController->CreatPlayerUI();
        
	}
    
	
}




// ak开火
void ANetshootCharacterBase::FireWeaponPrimary()
{
	if (ServerWeaponBase->ClipCurrentAmmon>0)
	{
		ServerFireRifleWeapon(PlayerCamera->GetComponentLocation(),PlayerCamera->GetComponentRotation(),false);
	
		ClientFire();

		UKismetSystemLibrary::PrintString(this,FString::Printf(TEXT("ServerWeaponBase->ClipCurrentAmmon:%d"),ServerWeaponBase->ClipCurrentAmmon));
	}

	
	

	
	
	
}
// ak停止开火
void ANetshootCharacterBase::StopFirePrimary()
{
	
}

void ANetshootCharacterBase::ClientFire_Implementation()
{
	
    
	// /枪体播放动画
	AWeaponClientBase* CurrentClientWeapon=GetCurrentWeaponClient();
	if (CurrentClientWeapon)
	{
		CurrentClientWeapon->PlayAnimation();

		
		// 手臂播放动画
		UAnimMontage*  TempMontage=ClientWeaponeBase->ClientArmFireAnimMontage;
		if (TempMontage)
		{
			ClientArmAnimWEapon->Montage_Play(TempMontage);
		}


		//声音射击播放
		CurrentClientWeapon->DisplayWeaponEffect();

		// 播放屏幕抖动cameraShake
		NetPlayerController->PlayCameraShake(CurrentClientWeapon->CameraShakeClass);
		//播放缩放十字的动画
		NetPlayerController->DoCrosshairRecoil();

		
		
	}


	
}


AWeaponClientBase* ANetshootCharacterBase::GetCurrentWeaponClient()
{
	switch (ActiveWeapon)
	{
	case EWeaponType::Ak47:
		{
			return   ClientWeaponeBase;
			
		}
		
	}
	return  nullptr;
}

// Called every frame
void ANetshootCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANetshootCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ANetshootCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ANetshootCharacterBase::MoveRight);

	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ANetshootCharacterBase::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ANetshootCharacterBase::AddControllerPitchInput);


	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ANetshootCharacterBase::JumpAction);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, this, &ANetshootCharacterBase::JumpStop);
	
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &ANetshootCharacterBase::InputFirePressed);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Released, this, &ANetshootCharacterBase::InputFireRelease);

	

	PlayerInputComponent->BindAction(TEXT("LowSpeedWalik"), EInputEvent::IE_Pressed, this, &ANetshootCharacterBase::LowSpeedWalik);
	PlayerInputComponent->BindAction(TEXT("LowSpeedWalik"), EInputEvent::IE_Released, this, &ANetshootCharacterBase::NormalSpeedWalik);



	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ANetshootCharacterBase::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ANetshootCharacterBase::AddControllerPitchInput);
	
}

bool ANetshootCharacterBase::ServerLowSpeedWalk_Validate()
{
	return true;
}

void ANetshootCharacterBase::ServerLowSpeedWalk_Implementation()
{
	GetCharacterMovement()->MaxWalkSpeed=300;
}


bool ANetshootCharacterBase::ServerNormalSpeedWalk_Validate()
{
	return true;
}

void ANetshootCharacterBase::ServerNormalSpeedWalk_Implementation()
{
	GetCharacterMovement()->MaxWalkSpeed=500;
}

void ANetshootCharacterBase::ClientEquitFPArmPrimary_Implementation()
{
	if (ServerWeaponBase)
	{
		if (!ClientWeaponeBase)
		{
			// UE_LOG(LogTemp,Warning,TEXT("警告"));
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner=this;
			SpawnParameters.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			ClientWeaponeBase=GetWorld()->SpawnActor<AWeaponClientBase>(ServerWeaponBase->WeaponClient,GetTransform(),SpawnParameters);
			ClientWeaponeBase->AttachToComponent(FPArmMesh,FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("hand_r_Client"));
		}

		UKismetSystemLibrary::PrintString(GetWorld(),TEXT("zeng")); 
	}
}

void ANetshootCharacterBase::ServerFireRifleWeapon_Implementation(FVector CameraLoction, FRotator CamereRotation,
	bool IsMoving)
{
	
	ServerWeaponBase->MuliticastShootingEffect();

	ServerWeaponBase->ClipCurrentAmmon-=1;

	UKismetSystemLibrary::PrintString(this,FString::Printf(TEXT("ServerWeaponBase->ClipCurrentAmmon:%d"),ServerWeaponBase->ClipCurrentAmmon));
}

bool ANetshootCharacterBase::ServerFireRifleWeapon_Validate(FVector CameraLoction, FRotator CamereRotation,
	bool IsMoving)
{
	return true;
}


void ANetshootCharacterBase::EquipPrimary(AWeaponServerBase* ServerWeapon)
{
	
	if(ServerWeaponBase)
	{
		
	}
	else
	{
		ServerWeaponBase=ServerWeapon;

		ServerWeaponBase->SetOwner(this);
		ServerWeaponBase->AttachToComponent(GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("hand_r_first"));

		ClientEquitFPArmPrimary();
		if (HasAuthority())
		{
			
		}
		

	}
}

void ANetshootCharacterBase::StartWitKindofWeapon()
{
	if (HasAuthority())
	{
		PurchaseWeapon(EWeaponType::Ak47);
	}
}

void ANetshootCharacterBase::PurchaseWeapon(EWeaponType Weapontype)
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Owner=this;
	SpawnParameters.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	
	switch (Weapontype)
	{
	case  EWeaponType::Ak47:
		{
		UClass* Temp=	StaticLoadClass(AWeaponServerBase::StaticClass(),nullptr,TEXT("Blueprint'/Game/NetShoot/Blueprint/Weapon/BP_ServerWeaponBase.BP_ServerWeaponBase_C'"));
        AWeaponServerBase* ServerWeaponTemp=    GetWorld()->SpawnActor<AWeaponServerBase>(Temp,GetTransform(),SpawnParameters);
			
			EquipPrimary(ServerWeaponTemp);
			
		}
		break;
	case EWeaponType::DesertEagle:
		{
			
		}
		break;
	}
}

