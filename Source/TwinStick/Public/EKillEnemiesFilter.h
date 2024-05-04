#pragma once
#include "CoreMinimal.h"
#include "EKillEnemiesFilter.generated.h"

UENUM(BlueprintType)
enum class EKillEnemiesFilter : uint8 {
    All,
    Monsters,
    EnemyMarines,
};

