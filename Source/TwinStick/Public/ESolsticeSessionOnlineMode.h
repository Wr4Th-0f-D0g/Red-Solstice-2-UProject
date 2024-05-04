#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSessionOnlineMode.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSessionOnlineMode : uint8 {
    Offline,
    LAN,
    Online,
};

