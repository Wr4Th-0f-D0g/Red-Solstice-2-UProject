#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamChatRoomEnterResponse.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamChatRoomEnterResponse : uint8 {
    Unknown,
    Success,
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

