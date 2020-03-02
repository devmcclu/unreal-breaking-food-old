// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "SlicedFood.generated.h"

UCLASS()
class FOODBREAKING_API ASlicedFood : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASlicedFood();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UProceduralMeshComponent * mesh;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStaticMesh> MeshToCopy;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// UFUNCTION()
	// void CreateTriangle();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
