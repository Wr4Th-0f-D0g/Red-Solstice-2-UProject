#pragma once
#include "CoreMinimal.h"
#include "EAirSupportLevel.generated.h"

UENUM(BlueprintType)
enum class EAirSupportLevel : uint8 {
    None,
    Light,
    Heavy,
};

