#pragma once
#include "CoreMinimal.h"
#include "OnAllEggsDestroyedDelegate.generated.h"

class ANestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllEggsDestroyed, ANestBase*, DestroyedNest);

