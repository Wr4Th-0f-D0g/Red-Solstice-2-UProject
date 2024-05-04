#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StrategyInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FStrategyInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    TWINSTICK_API FStrategyInventoryItem();
};

