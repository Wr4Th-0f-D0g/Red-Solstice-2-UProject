#pragma once
#include "CoreMinimal.h"
#include "EProjectileRotationMode.generated.h"

UENUM(BlueprintType)
enum class EProjectileRotationMode : uint8 {
    None,
    AlignX,
    AlignY,
    AlignZ,
    MirrorX,
    MirrorY,
    MirrorZ,
};

