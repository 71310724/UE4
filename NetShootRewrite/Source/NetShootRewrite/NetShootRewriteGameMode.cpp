// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetShootRewriteGameMode.h"
#include "NetShootRewriteHUD.h"
#include "NetShootRewriteCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetShootRewriteGameMode::ANetShootRewriteGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANetShootRewriteHUD::StaticClass();
}
