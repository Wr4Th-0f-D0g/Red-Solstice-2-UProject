#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PlaceableItemsRangeContainer.h"
#include "PlaceableItemData.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UPlaceableItemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaceableItemsRangeContainer PlaceableItemsRangeData;
    
    UPlaceableItemData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemData(FGameplayTag Tag) const;
    
};

