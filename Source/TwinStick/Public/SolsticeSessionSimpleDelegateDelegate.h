#pragma once
#include "CoreMinimal.h"
#include "SolsticeSessionSimpleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSolsticeSessionSimpleDelegate, bool, bSuccessful);

