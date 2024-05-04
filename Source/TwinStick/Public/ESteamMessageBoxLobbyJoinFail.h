#pragma once
#include "CoreMinimal.h"
#include "ESteamMessageBoxLobbyJoinFail.generated.h"

UENUM(BlueprintType)
enum class ESteamMessageBoxLobbyJoinFail : uint8 {
    None,
    DoesntExist,
    NotAllowed,
    Full,
    Error,
    Banned,
    Limited,
    ClanDisabled,
    CommunityBan,
    MemberBlockedYou,
    YouBlockedMember,
};

