#pragma once
#include "CoreMinimal.h"
#include "ESolsticeLeaderboardUploadMethod.generated.h"

UENUM(BlueprintType)
enum class ESolsticeLeaderboardUploadMethod : uint8 {
    MethodNone,
    MethodKeepBest,
    MethodForceUpdate,
};

