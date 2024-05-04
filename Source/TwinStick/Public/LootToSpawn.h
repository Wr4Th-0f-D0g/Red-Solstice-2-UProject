#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LootToSpawn.generated.h"

class AInventoryPickup;

USTRUCT(BlueprintType)
struct FLootToSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryPickup> PickupClass;
    
    TWINSTICK_API FLootToSpawn();
};

