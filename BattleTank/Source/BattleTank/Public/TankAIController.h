// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 80000.0f;
private:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	
};
