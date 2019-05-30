// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "BoxEnemy.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
ABoxEnemy::ABoxEnemy()
{
 	
}


void ABoxEnemy::OnAuthorityGained()
{
	Super::OnAuthorityGained(); // Mandatory
	ServerAuthorityChanged();
}



