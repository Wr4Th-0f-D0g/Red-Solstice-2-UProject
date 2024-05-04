#pragma once
#include "CoreMinimal.h"
#include "EVehicleStatus.generated.h"

UENUM(BlueprintType)
enum class EVehicleStatus : uint8 {
    EVStatus_Idle,
    EVStatus_EnRoute,
    EVStatus_Loading,
    EVStatus_Unloading,
    EVStatus_TakeOff,
    EVStatus_Landing,
};

