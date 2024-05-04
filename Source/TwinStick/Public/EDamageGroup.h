#pragma once
#include "CoreMinimal.h"
#include "EDamageGroup.generated.h"

UENUM(BlueprintType)
enum class EDamageGroup : uint8 {
    EDT_None,
    EDT_Destructive,
    EDT_Energy,
    EDT_Kinetic,
};

