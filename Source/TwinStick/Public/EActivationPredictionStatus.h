#pragma once
#include "CoreMinimal.h"
#include "EActivationPredictionStatus.generated.h"

UENUM(BlueprintType)
enum class EActivationPredictionStatus : uint8 {
    InactiveAwaiting,
    InactiveConfirmed,
    ActivatedAwaiting,
    ActivatedConfirmed,
    DeactivatedAwaiting,
    DeactivatedConfirmed,
    FiredAwaiting,
    FiredConfirmed,
    AbortedAwaiting,
    AbortedConfirmed,
};

