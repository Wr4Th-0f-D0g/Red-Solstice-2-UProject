#pragma once
#include "CoreMinimal.h"
#include "ESolsticeMessagingResult.h"
#include "SolsticeNotificationResultMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSolsticeNotificationResultMCDelegate, ESolsticeMessagingResult, Result);

