#pragma once
#include "CoreMinimal.h"
#include "ESecondaryMissionFrequency.generated.h"

UENUM(BlueprintType)
enum class ESecondaryMissionFrequency : uint8 {
    Few,
    Normal,
    Many,
};

