#pragma once
#include "CoreMinimal.h"
#include "EDamageState.generated.h"

UENUM(BlueprintType)
enum class EDamageState : uint8 {
    Clean,
    ThreeQuarters,
    Half,
    OneQuarter,
    Destroyed,
};

