#pragma once
#include "CoreMinimal.h"
#include "ESuitModuleType.generated.h"

UENUM(BlueprintType)
enum class ESuitModuleType : uint8 {
    Invalid,
    Upgrade,
    Module,
    System,
};

