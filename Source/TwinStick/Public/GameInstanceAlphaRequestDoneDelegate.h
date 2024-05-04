#pragma once
#include "CoreMinimal.h"
#include "GameInstanceAlphaRequestDoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameInstanceAlphaRequestDone, bool, bWasSuccess);

