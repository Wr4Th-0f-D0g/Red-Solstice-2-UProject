#pragma once
#include "CoreMinimal.h"
#include "ESolsticeNotificationStyle.generated.h"

UENUM(BlueprintType)
enum class ESolsticeNotificationStyle : uint8 {
    Notification,
    Warning,
    Error,
};

