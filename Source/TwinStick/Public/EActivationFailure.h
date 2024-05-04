#pragma once
#include "CoreMinimal.h"
#include "EActivationFailure.generated.h"

UENUM(BlueprintType)
enum class EActivationFailure : uint8 {
    EAF_None,
    EAF_Incapacitated,
    EAF_Level,
    EAF_Resources,
    EAF_Cooldown,
    EAF_Activated,
    EAF_Location,
    EAF_Custom,
};

