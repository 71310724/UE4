// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NetShootPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NETSHOOTREWRITE_API ANetShootPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	void  PlayCameraShake(TSubclassOf<class UCameraShakeBase >    CameraShake);
	
};
