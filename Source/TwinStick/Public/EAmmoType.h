#pragma once
#include "CoreMinimal.h"
#include "EAmmoType.generated.h"

UENUM(BlueprintType)
enum class EAmmoType : uint8 {
    EAT_None,
    EAT_Primary,
    EAT_Secondary,
};

