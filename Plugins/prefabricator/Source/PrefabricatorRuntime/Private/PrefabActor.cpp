#include "PrefabActor.h"
#include "PrefabComponent.h"
#include "Templates/SubclassOf.h"

APrefabActor::APrefabActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetStartup = true;
    this->RootComponent = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
    this->PrefabComponent = (UPrefabComponent*)RootComponent;
    this->Seed = 0;
    this->PrefabNullModifier = NULL;
}

void APrefabActor::SetPrefab(UPrefabricatorAssetInterface* NewPrefab) {
}

void APrefabActor::SavePrefab() {
}

void APrefabActor::RandomizeSeed(const FRandomStream& InRandom, bool bRecursive) {
}

void APrefabActor::LoadPrefab() {
}

bool APrefabActor::IsPrefabOutdated() {
    return false;
}

UPrefabricatorAsset* APrefabActor::GetPrefabAsset(APrefabRandomizer* InRandomizer, TSubclassOf<AActor>& OutModClass) {
    return NULL;
}


