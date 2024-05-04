#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CancellableAsyncAction.h"
#include "ELootTableElement.h"
#include "AsyncAction_SpawnSpecificLootAroundMap.generated.h"

class UAsyncAction_SpawnSpecificLootAroundMap;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UAsyncAction_SpawnSpecificLootAroundMap : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UAsyncAction_SpawnSpecificLootAroundMap();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_SpawnSpecificLootAroundMap* SpawnSpecificLootAroundMap(UObject* WorldContextObject, FDataTableRowHandle InDatatableRowHandle, ELootTableElement InElement, FGameplayTagContainer InLocations);
    
};

