#pragma once
#include "CoreMinimal.h"
#include "EFowBlurEnableRules.generated.h"

UENUM(BlueprintType)
enum EFowBlurEnableRules {
    NeverBlur,
    BlurOnlyPlayerPawnOnScreen,
    BlurEverythingOnScreen,
    BlurEverything,
};

