#pragma once
#include "CoreMinimal.h"
#include "ERegionContactStatus.h"
#include "ContactStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FContactStatusChanged, ERegionContactStatus, ContactStatus);

