#pragma once
#include "CoreMinimal.h"
#include "EFollowerType.generated.h"

UENUM(BlueprintType)
enum class EFollowerType : uint8 {
    Friendly,
    Permanent,
};

