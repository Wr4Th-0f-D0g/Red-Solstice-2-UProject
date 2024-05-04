#pragma once
#include "CoreMinimal.h"
#include "EAnimCall.generated.h"

UENUM(BlueprintType)
enum class EAnimCall : uint8 {
    AnimCallNone,
    AnimCallAim,
    AnimCallReload,
    AnimCallSpit,
    AnimCallSwitchWeapon,
    AnimCallThrowBarrel,
    AnimCallDroneBomb,
    AnimCallDroneBlock,
    AnimCallDroneScout,
    AnimCallDroneEngage,
};

