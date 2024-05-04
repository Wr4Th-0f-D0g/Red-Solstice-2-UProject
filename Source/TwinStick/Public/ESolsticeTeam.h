#pragma once
#include "CoreMinimal.h"
#include "ESolsticeTeam.generated.h"

UENUM(BlueprintType)
enum class ESolsticeTeam : uint8 {
    HeroMarine,
    Monster,
    EnemyMarine,
    EnemyToAll,
    NoTeam = 255,
};

