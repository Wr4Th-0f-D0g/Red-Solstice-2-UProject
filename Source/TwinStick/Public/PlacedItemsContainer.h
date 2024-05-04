#pragma once
#include "CoreMinimal.h"
#include "PlacedItemsInWorld.h"
#include "PlacedItemsContainer.generated.h"

USTRUCT(BlueprintType)
struct FPlacedItemsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FPlacedItemsInWorld> PlacedItemsInWorld;
    
    TWINSTICK_API FPlacedItemsContainer();
};

