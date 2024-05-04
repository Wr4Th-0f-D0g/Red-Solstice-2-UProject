#pragma once
#include "CoreMinimal.h"
#include "PreviewAbilityActivationRequestedDelegateDelegate.generated.h"

class UAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreviewAbilityActivationRequestedDelegate, UAbilityBase*, InAbility);

