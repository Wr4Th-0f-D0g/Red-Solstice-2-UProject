#pragma once
#include "CoreMinimal.h"
#include "EBossType.generated.h"

UENUM(BlueprintType)
enum class EBossType : uint8 {
    None,
    AlmostBoss,
    MiniBoss,
    EpicBoss,
    UltraBoss,
};

