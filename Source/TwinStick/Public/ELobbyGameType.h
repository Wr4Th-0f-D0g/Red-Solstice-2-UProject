#pragma once
#include "CoreMinimal.h"
#include "ELobbyGameType.generated.h"

UENUM(BlueprintType)
enum class ELobbyGameType : uint8 {
    All,
    Skirmish,
    Campaign,
};

