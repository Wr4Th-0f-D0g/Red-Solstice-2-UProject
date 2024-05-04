#pragma once
#include "CoreMinimal.h"
#include "PlayerRankChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerRankChanged, int32, Rank);

