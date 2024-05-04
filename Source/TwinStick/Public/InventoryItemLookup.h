#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventoryItemLookup.generated.h"

class AInventoryPickup;
class UItem;

USTRUCT(BlueprintType)
struct FInventoryItemLookup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryPickup> PickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UItem> ItemClass;
    
    TWINSTICK_API FInventoryItemLookup();
};

