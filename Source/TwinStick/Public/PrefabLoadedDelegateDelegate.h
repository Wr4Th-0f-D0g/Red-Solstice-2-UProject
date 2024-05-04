#pragma once
#include "CoreMinimal.h"
#include "PrefabLoadedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrefabLoadedDelegate, int32, NumLoaded);

