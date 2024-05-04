#pragma once
#include "CoreMinimal.h"
#include "SGTRepeatedActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSGTRepeatedActionDelegate, int32, ActionNumber);

