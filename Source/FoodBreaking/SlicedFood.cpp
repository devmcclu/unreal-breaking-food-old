// Fill out your copyright notice in the Description page of Project Settings.


#include "SlicedFood.h"

// Sets default values
ASlicedFood::ASlicedFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;
	
}

// Called when the game starts or when spawned
void ASlicedFood::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASlicedFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Test Creating staic mesh

// void ASlicedFood::CreateTriangle()
// {
// 	TArray<FVector> vertices;
// 	vertices.Add(FVector(100, 100, 0));
// 	vertices.Add(FVector(-100, 100, 0));
// 	vertices.Add(FVector(-100, -100, 0));
// 	vertices.Add(FVector(100, -100, 0));

// 	TArray<int32> triangles;
// 	triangles.Add(0);
// 	triangles.Add(2);
// 	triangles.Add(1);
// 	triangles.Add(0);
// 	triangles.Add(3);
// 	triangles.Add(2);

// 		TArray<FVector> normals;
// 	normals.Add(FVector(1, 0, 0));
// 	normals.Add(FVector(1, 0, 0));
// 	normals.Add(FVector(1, 0, 0));
// 	normals.Add(FVector(1, 0, 0));

// 	TArray<FVector2D> UV0;
// 	UV0.Add(FVector2D(0, 0));
// 	UV0.Add(FVector2D(10, 0));
// 	UV0.Add(FVector2D(0, 10));
// 	UV0.Add(FVector2D(0, 0));
	

// 	TArray<FProcMeshTangent> tangents;
// 	tangents.Add(FProcMeshTangent(0, 1, 0));
// 	tangents.Add(FProcMeshTangent(0, 1, 0));
// 	tangents.Add(FProcMeshTangent(0, 1, 0));
// 	tangents.Add(FProcMeshTangent(0, 1, 0));

// 	TArray<FLinearColor> vertexColors;
// 	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
// 	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
// 	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
// 	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

// 	mesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, UV0, vertexColors, tangents, true);

// 	//enable collision
// 	mesh->ContainsPhysicsTriMeshData(true);
// }
