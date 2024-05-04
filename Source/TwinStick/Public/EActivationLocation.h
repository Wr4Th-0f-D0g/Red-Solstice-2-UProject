#pragma once
#include "CoreMinimal.h"
#include "EActivationLocation.generated.h"

UENUM(BlueprintType)
enum class EActivationLocation : uint8 {
    EAL_None,
    EAL_Self,
    EAL_Location,
};

