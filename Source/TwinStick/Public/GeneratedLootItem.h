#pragma once
#include "CoreMinimal.h"
#include "GeneratedLootItem.generated.h"

class AInventoryPickup;

USTRUCT(BlueprintType)
struct FGeneratedLootItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryPickup> PickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    TWINSTICK_API FGeneratedLootItem();
};

