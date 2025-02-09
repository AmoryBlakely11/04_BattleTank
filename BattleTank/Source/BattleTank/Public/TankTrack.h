// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void ApplySidewaysForce();
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);
	void DriveTrack();
		
private:
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 40000000.0f;
	virtual void BeginPlay() override;
	UTankTrack();
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	float CurrentThrottle = 0.0f;
};
