// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"





// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//shfslurfsdlfkj
	PrimaryActorTick.bCanEverTick = false;
}

float ATank::TakeDamage
(
	float DamageAmount,
	struct FDamageEvent const & DamageEvent,
	class AController * EventInstigator,
	AActor * DamageCauser
) {
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	auto DamageToApply = FMath::Clamp<int32>(DamagePoints, 0, CurrentHealth);
	return DamageToApply;
}

