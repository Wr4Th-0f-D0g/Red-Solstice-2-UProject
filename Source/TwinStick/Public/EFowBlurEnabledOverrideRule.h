#pragma once
#include "CoreMinimal.h"
#include "EFowBlurEnabledOverrideRule.generated.h"

UENUM(BlueprintType)
enum EFowBlurEnabledOverrideRule {
    OverrideNone,
    OverrideEnableOnScreen,
    OverrideEnableAlways,
    OverrideDisableOffScreen,
    OverrideDisableAlways,
};

