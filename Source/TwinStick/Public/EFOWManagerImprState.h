#pragma once
#include "CoreMinimal.h"
#include "EFOWManagerImprState.generated.h"

UENUM(BlueprintType)
enum class EFOWManagerImprState : uint8 {
    Standby,
    WaitingForFowComponents,
    WaitingForWorkerResults,
    UpdatingTexture,
};

