#pragma once
#include "CoreMinimal.h"
#include "EActiveWeaponMode.generated.h"

UENUM(BlueprintType)
enum class EActiveWeaponMode : uint8 {
    EAWM_None,
    EAWM_Primary,
    EAWM_Secondary,
};

