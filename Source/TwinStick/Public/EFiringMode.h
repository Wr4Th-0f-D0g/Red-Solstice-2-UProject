#pragma once
#include "CoreMinimal.h"
#include "EFiringMode.generated.h"

UENUM(BlueprintType)
enum class EFiringMode : uint8 {
    EFS_Idle,
    EFS_Secondary,
    EFS_Targeted,
    EFS_Auto,
    EFS_Free,
    EFS_Invalid,
};

