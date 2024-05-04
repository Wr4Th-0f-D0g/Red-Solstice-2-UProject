#pragma once
#include "CoreMinimal.h"
#include "CameraControlChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraControlChanged, bool, bEnabled);

