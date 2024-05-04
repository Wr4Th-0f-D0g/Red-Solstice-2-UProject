#pragma once
#include "CoreMinimal.h"
#include "ESolsticeNotificationButtonConfiguration.generated.h"

UENUM(BlueprintType)
enum class ESolsticeNotificationButtonConfiguration : uint8 {
    None,
    OK,
    Cancel,
    Yes,
    No,
};

