#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserOnlineContext.generated.h"

UENUM(BlueprintType)
enum class ESolsticeUserOnlineContext : uint8 {
    Game,
    Default,
    Service,
    ServiceOrDefault,
    Platform,
    PlatformOrDefault,
    Invalid,
};

