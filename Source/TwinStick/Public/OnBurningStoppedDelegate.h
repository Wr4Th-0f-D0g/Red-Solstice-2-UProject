#pragma once
#include "CoreMinimal.h"
#include "OnBurningStoppedDelegate.generated.h"

class UWallBurningManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBurningStopped, UWallBurningManager*, WallBurningManager);

