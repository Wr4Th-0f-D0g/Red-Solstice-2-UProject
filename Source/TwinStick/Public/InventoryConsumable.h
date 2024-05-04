#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "InventoryConsumable.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInventoryConsumable : public UInventoryItem {
    GENERATED_BODY()
public:
    UInventoryConsumable(const FObjectInitializer& ObjectInitializer);

};

