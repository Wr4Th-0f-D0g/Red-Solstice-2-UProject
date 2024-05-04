#include "RTSNavMeshBounds.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"

ARTSNavMeshBounds::ARTSNavMeshBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->Tags.AddDefaulted(1);
    this->BoxComponent = (UBoxComponent*)RootComponent;
}


