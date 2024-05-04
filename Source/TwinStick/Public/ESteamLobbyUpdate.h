#pragma once
#include "CoreMinimal.h"
#include "ESteamLobbyUpdate.generated.h"

UENUM(BlueprintType)
enum class ESteamLobbyUpdate : uint8 {
    Entered,
    Left,
    Disconnected,
    Kicked,
    Banned,
};

