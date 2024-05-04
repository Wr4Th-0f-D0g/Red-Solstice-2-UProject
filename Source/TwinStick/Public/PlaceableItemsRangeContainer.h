#pragma once
#include "CoreMinimal.h"
#include "PlaceableItemsRange.h"
#include "PlaceableItemsRangeContainer.generated.h"

USTRUCT(BlueprintType)
struct FPlaceableItemsRangeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FPlaceableItemsRange> PlaceableItemsRange;
    
    TWINSTICK_API FPlaceableItemsRangeContainer();
};

