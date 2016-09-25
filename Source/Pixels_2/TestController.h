// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "TestController.generated.h"

UCLASS()
class PIXELS_2_API ATestController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestController();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	/** Game Object to spawn*/
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class APixelCube> WhatToSpawn;


private:
	//Variables:
	int fps;
	int cubes;
	//Functions:
	void ShowFrameRate();
};
