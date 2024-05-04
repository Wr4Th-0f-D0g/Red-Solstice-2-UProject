#pragma once
#include "CoreMinimal.h"
#include "ESteamLobbyType.generated.h"

UENUM(BlueprintType)
enum class ESteamLobbyType : uint8 {
    Public,
    InviteOnly,
    Friends,
    FriendsFreeInvite,
};

