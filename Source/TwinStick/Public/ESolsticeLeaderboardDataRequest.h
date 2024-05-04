#pragma once
#include "CoreMinimal.h"
#include "ESolsticeLeaderboardDataRequest.generated.h"

UENUM(BlueprintType)
enum class ESolsticeLeaderboardDataRequest : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
    Users,
};

