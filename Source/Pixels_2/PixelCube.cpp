// Fill out your copyright notice in the Description page of Project Settings.

#include "Pixels_2.h"
#include "PixelCube.h"


// Sets default values
APixelCube::APixelCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create the static mesh component
	PixelCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PixelCubeMesh"));
	RootComponent = PixelCubeMesh;
}

// Called when the game starts or when spawned
void APixelCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APixelCube::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

