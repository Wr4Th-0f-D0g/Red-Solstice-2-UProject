#pragma once
#include "CoreMinimal.h"
#include "OnInteractionWidgetVisibilityToggledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionWidgetVisibilityToggled, bool, NewVisibility);

