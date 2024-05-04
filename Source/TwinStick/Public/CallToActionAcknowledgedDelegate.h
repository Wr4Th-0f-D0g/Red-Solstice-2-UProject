#pragma once
#include "CoreMinimal.h"
#include "CallToActionAcknowledgedDelegate.generated.h"

class UCallToActionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCallToActionAcknowledged, UCallToActionBase*, CallToActionWidget);

