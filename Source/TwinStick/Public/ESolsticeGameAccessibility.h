#pragma once
#include "CoreMinimal.h"
#include "ESolsticeGameAccessibility.generated.h"

UENUM(BlueprintType)
enum class ESolsticeGameAccessibility : uint8 {
    Public,
    FriendOnly,
    Private,
};

