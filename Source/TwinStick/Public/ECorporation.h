#pragma once
#include "CoreMinimal.h"
#include "ECorporation.generated.h"

UENUM(BlueprintType)
enum class ECorporation : uint8 {
    Elysium,
    HowelBarrex,
    Condatis,
    Insurgents,
    MERCS,
    Invalid = 100,
};

