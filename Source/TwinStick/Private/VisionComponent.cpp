#include "VisionComponent.h"

UVisionComponent::UVisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisionMesh = NULL;
    this->VisionRange = 8.00f;
    this->VisionArc = 360.00f;
    this->VectorGenerationMethod = EVisionVectorGenerationMethod::VGM_Number;
    this->DistanceBetweenPoints = 0.00f;
    this->AngleBetweenVectors = 0.00f;
    this->NumberOfPoints = 30;
    this->MeshRegenerationInterval = 0.00f;
    this->LineTraceZ = 180.00f;
    this->MeshDrawZ = 245.00f;
}

TArray<FVector> UVisionComponent::GenerateTracePoints(int32& vectorCount) {
    return TArray<FVector>();
}


