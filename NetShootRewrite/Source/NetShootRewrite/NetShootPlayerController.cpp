// Fill out your copyright notice in the Description page of Project Settings.


#include "NetShootPlayerController.h"

void ANetShootPlayerController::PlayCameraShake(TSubclassOf<UCameraShakeBase> CameraShake)
{
	ClientPlayCameraShake(CameraShake);

	
}

