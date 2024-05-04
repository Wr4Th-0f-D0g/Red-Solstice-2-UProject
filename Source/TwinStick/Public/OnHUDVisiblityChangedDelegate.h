#pragma once
#include "CoreMinimal.h"
#include "OnHUDVisiblityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHUDVisiblityChanged, bool, bNewHidden, bool, bToggleMinimap);

