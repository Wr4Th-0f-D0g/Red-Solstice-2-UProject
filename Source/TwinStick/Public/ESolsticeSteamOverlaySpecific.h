#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamOverlaySpecific.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamOverlaySpecific : uint8 {
    SteamID,
    Chat,
    JoinTrade,
    Stats,
    Achievements,
    FriendAdd,
    FriendRemove,
    FriendRequestAccept,
    FriendRequestIgnore,
};

