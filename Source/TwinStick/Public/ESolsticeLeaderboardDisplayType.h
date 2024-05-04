#pragma once
#include "CoreMinimal.h"
#include "ESolsticeLeaderboardDisplayType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeLeaderboardDisplayType : uint8 {
    TypeNone,
    TypeNumeric,
    TypeSeconds,
    TypeMiliseconds,
};

