#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenNavmeshTilesRebuildDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoadingScreenNavmeshTilesRebuild, int32, Total, int32, Remaining);

