#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InventorySlot.h"
#include "Inventory.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FInventory : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventorySlot> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> Owner;
    
    TWINSTICK_API FInventory();
};

