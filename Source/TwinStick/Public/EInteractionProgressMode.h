#pragma once
#include "CoreMinimal.h"
#include "EInteractionProgressMode.generated.h"

UENUM(BlueprintType)
enum class EInteractionProgressMode : uint8 {
    EIPM_Standard,
    EIPM_Cooperative,
    EIRM_Separate,
};

