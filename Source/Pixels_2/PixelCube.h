// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PixelCube.generated.h"

UCLASS()
class PIXELS_2_API APixelCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APixelCube();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

private:
	/** Static mesh to represent the PixelCube in the level*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PixelCubeMesh", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PixelCubeMesh;
	
};
