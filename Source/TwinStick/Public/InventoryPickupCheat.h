#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventoryPickupCheat.generated.h"

class AInventoryPickup;

USTRUCT(BlueprintType)
struct FInventoryPickupCheat : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PickupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryPickup> Class;
    
    TWINSTICK_API FInventoryPickupCheat();
};

