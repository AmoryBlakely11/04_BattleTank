// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 20.0f;
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 30.0f;
	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0.0f;

public:
	// -1 is maximum downward speed and +1 is max up speed
	void Elevate(float RelativeSpeed);

};
