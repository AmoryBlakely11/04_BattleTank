// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"


void ATankAIController::BeginPlay() {
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank) {
		UE_LOG(LogTemp, Error, TEXT("Player not possessing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Player possessing a %s"), *PlayerTank->GetName());
	}
}

ATank* ATankAIController::GetControlledTank() const{
	return Cast<ATank>(GetPawn());
}
ATank * ATankAIController::GetPlayerTank() const{
	auto PlayerPawn =  Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PlayerPawn) { return nullptr; }
	return PlayerPawn;
}
