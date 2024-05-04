#pragma once
#include "CoreMinimal.h"
#include "OverlapResultBlueprintable.h"
#include "OverlapByObjectsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOverlapByObjectsAsyncDelegate, const TArray<FOverlapResultBlueprintable>&, Overlaps, const int32, InData);

