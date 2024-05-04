#pragma once
#include "CoreMinimal.h"
#include "ELobbyGameType.h"
#include "ESolsticeLobbyDistanceFilter.h"
#include "SteamLobbyFilterOptions.generated.h"

USTRUCT(BlueprintType)
struct FSteamLobbyFilterOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyGameType LobbyGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreStartedGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeLobbyDistanceFilter LobbySearchDistance;
    
    TWINSTICK_API FSteamLobbyFilterOptions();
};

