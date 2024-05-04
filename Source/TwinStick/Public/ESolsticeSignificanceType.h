#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSignificanceType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSignificanceType : uint8 {
    Player,
    Monster,
    Civilians,
    BasicAI,
    HeroAI,
    MechSuit,
    Vehicle,
    GameplayActor,
    MAX,
};

