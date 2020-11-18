// Copyright Epic Games, Inc. All Rights Reserved.

#include "CppProjectGameMode.h"
#include "CppProjectHUD.h"
#include "CppProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppProjectGameMode::ACppProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACppProjectHUD::StaticClass();
}
