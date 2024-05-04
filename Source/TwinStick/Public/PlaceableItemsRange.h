#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlaceableItemsRange.generated.h"

USTRUCT(BlueprintType)
struct FPlaceableItemsRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlacedItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToOthers;
    
    TWINSTICK_API FPlaceableItemsRange();
};

