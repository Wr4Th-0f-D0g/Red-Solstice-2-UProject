#include "PrefabricatorBlueprintLibrary.h"

UPrefabricatorBlueprintLibrary::UPrefabricatorBlueprintLibrary() {
}

APrefabActor* UPrefabricatorBlueprintLibrary::SpawnPrefab(const UObject* WorldContextObject, UPrefabricatorAssetInterface* Prefab, const FTransform& Transform, int32 Seed) {
    return NULL;
}

void UPrefabricatorBlueprintLibrary::RandomizePrefab(APrefabActor* PrefabActor, const FRandomStream& InRandom) {
}

void UPrefabricatorBlueprintLibrary::GetAllAttachedActors(AActor* Prefab, TArray<AActor*>& AttachedActors) {
}


