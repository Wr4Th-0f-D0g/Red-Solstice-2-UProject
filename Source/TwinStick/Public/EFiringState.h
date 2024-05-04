#pragma once
#include "CoreMinimal.h"
#include "EFiringState.generated.h"

UENUM(BlueprintType)
enum class EFiringState : uint8 {
    EFS_None,
    EFS_Idle,
    EFS_Equip,
    EFS_Unequip,
    EFS_Reload,
    EFS_Ready,
    EFS_Windup,
    EFS_Fire,
    EFS_Winddown,
    EFS_Disabled,
};

