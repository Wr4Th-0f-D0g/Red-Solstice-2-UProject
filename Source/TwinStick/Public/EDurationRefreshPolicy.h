#pragma once
#include "CoreMinimal.h"
#include "EDurationRefreshPolicy.generated.h"

UENUM(BlueprintType)
enum class EDurationRefreshPolicy : uint8 {
    EDR_Refresh,
    EDR_NoRefresh,
};

