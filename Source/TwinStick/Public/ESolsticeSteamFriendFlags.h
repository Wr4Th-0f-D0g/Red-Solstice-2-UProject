#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamFriendFlags.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamFriendFlags : uint8 {
    Blocked,
    FriendshipRequested,
    Immediate,
    ClanMember,
    OnGameServer,
    HasPlayedWith,
    FriendOfFriend,
    RequestingFriendship,
    RequestingInfo,
    Ignored,
    IgnoredFriend,
    Suggested,
    ChatMember,
    All,
};

