// Fill out your copyright notice in the Description page of Project Settings.

#include "Pixels_2.h"
#include "TestController.h"

#include "PixelCube.h"


// Sets default values
ATestController::ATestController() : fps(0), cubes(0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestController::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle FPSTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(FPSTimerHandle, this, &ATestController::ShowFrameRate, 1.f, true);
}

// Called every frame
void ATestController::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	//UE_LOG(LogTemp, Warning, TEXT("HERE"));
	GetWorld()->SpawnActor<APixelCube>(WhatToSpawn);

	fps++;
	cubes++;
}

void ATestController::ShowFrameRate()
{
	GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Yellow, 
		"fps: " + FString::FromInt(fps) +
		" ms: " + FString::SanitizeFloat(FApp::GetDeltaTime() * 1000) +
		" cubes: " + FString::FromInt(cubes) );
	fps = 0;
}
