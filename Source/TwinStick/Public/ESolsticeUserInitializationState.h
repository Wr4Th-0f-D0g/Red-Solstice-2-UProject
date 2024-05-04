#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserInitializationState.generated.h"

UENUM(BlueprintType)
enum class ESolsticeUserInitializationState : uint8 {
    Unknown,
    DoingInitialLogin,
    DoingNetworkLogin,
    FailedtoLogin,
    LoggedInOnline,
    LoggedInLocalOnly,
    Invalid,
};

