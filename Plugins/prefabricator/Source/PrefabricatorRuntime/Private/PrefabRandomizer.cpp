#include "PrefabRandomizer.h"
#include "Components/SceneComponent.h"

APrefabRandomizer::APrefabRandomizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SeedOffset = 0;
    this->MaxBuildTimePerFrame = 0.02f;
    this->bFastSyncBuild = false;
    this->StaticMeshActor = NULL;
}

void APrefabRandomizer::Randomize(int32 InSeed) {
}


