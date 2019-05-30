// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BoxEnemy.generated.h"

UCLASS(SpatialType)
class THIRDPERSONSHOOTER_API ABoxEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoxEnemy();

	virtual void OnAuthorityGained() override;

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "ServerChanged"))
	void ServerAuthorityChanged();
	
};
