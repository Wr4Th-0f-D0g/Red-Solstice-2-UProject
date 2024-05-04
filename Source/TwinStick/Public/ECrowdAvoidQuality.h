#pragma once
#include "CoreMinimal.h"
#include "ECrowdAvoidQuality.generated.h"

UENUM(BlueprintType)
enum class ECrowdAvoidQuality : uint8 {
    ECAQ_Low,
    ECAQ_Medium,
    ECAQ_Good,
    ECAQ_High,
};

