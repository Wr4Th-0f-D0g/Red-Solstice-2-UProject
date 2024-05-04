#pragma once
#include "CoreMinimal.h"
#include "EMissionLocationSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EMissionLocationSelectionMode : uint8 {
    UseTags,
    LastObjective,
    NamedObjective,
};

