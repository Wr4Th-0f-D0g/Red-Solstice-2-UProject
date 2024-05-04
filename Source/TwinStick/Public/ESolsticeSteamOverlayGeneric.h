#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamOverlayGeneric.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamOverlayGeneric : uint8 {
    Friends,
    Community,
    Players,
    Settings,
    OfficialGameGroup,
    Stats,
    Achievements,
};

