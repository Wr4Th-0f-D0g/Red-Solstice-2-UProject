#pragma once
#include "CoreMinimal.h"
#include "CallToActionShownChangedDelegate.generated.h"

class UCallToActionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCallToActionShownChanged, UCallToActionBase*, Widget, bool, Visible);

