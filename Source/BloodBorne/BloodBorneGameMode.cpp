// Copyright Epic Games, Inc. All Rights Reserved.

#include "BloodBorneGameMode.h"
#include "BloodBorneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABloodBorneGameMode::ABloodBorneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
