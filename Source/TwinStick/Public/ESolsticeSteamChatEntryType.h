#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamChatEntryType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamChatEntryType : uint8 {
    Invalid,
    ChatMessage,
    Typing,
    InviteGame,
    Emote,
    LeftConversation = 6,
    Entered,
    WasKicked,
    WasBanned,
    Disconnected,
    HistoricalChat,
    LinkBlocked = 14,
};

