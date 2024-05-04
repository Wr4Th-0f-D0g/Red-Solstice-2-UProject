#pragma once
#include "CoreMinimal.h"
#include "ESessionSortType.generated.h"

UENUM(BlueprintType)
enum class ESessionSortType : uint8 {
    None,
    ServerName,
    Difficulty,
    Ping,
    Players,
    Friends,
    GameType,
};

