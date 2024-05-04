#pragma once
#include "CoreMinimal.h"
#include "ESteamMessageBoxToText.generated.h"

UENUM(BlueprintType)
enum class ESteamMessageBoxToText : uint8 {
    LobbyFull,
    DisconnectedFromLobby,
    KickedFromLobby,
    JoiningInvite,
    JoiningSession,
    FailedLobbyJoin,
    FailedLobbyCreate,
    AlreadyInThisLobby,
    VersionMismatch,
    LobbyIsFull,
    GameInProgress,
};

