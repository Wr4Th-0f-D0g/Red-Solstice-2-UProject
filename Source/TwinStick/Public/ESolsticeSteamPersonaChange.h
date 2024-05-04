#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamPersonaChange.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamPersonaChange : uint8 {
    Name,
    Status,
    ComeOnline,
    GoneOffline,
    GamePlayed,
    GameServer,
    Avatar,
    JoinedSource,
    LeftSource,
    RelationshipChanged,
    NameFirstSet,
    FacebookInfo,
    Nickname,
    SteamLevel,
};

