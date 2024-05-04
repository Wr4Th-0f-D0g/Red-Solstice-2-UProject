#pragma once
#include "CoreMinimal.h"
#include "EActivationStatus.generated.h"

UENUM(BlueprintType)
enum class EActivationStatus : uint8 {
    EAS_Inactive,
    EAS_Activated,
    EAS_Charged,
    EAS_Deactivated,
    EAS_Fired,
    EAS_Reset,
    EAS_Confirmed,
};

