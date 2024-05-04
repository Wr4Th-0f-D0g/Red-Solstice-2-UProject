#pragma once
#include "CoreMinimal.h"
#include "ESpawnerState.generated.h"

UENUM(BlueprintType)
enum class ESpawnerState : uint8 {
    ESS_Disabled,
    ESS_Active,
};

