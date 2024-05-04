#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RegionStatusTagsChangedDelegate.generated.h"

class ARegion;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRegionStatusTagsChanged, ARegion*, Region, const FGameplayTagContainer&, StatusTags);

