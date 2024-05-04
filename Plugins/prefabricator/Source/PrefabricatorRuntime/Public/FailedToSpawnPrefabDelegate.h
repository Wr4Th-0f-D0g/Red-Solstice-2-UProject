#pragma once
#include "CoreMinimal.h"
#include "FailedToSpawnPrefabDelegate.generated.h"

class UPrefabricatorAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFailedToSpawnPrefab, TSoftObjectPtr<UPrefabricatorAsset>, PrefabAsset);

