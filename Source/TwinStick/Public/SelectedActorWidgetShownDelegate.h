#pragma once
#include "CoreMinimal.h"
#include "SelectedActorWidgetShownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedActorWidgetShown, bool, Visible);

