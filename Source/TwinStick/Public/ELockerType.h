#pragma once
#include "CoreMinimal.h"
#include "ELockerType.generated.h"

UENUM(BlueprintType)
enum class ELockerType : uint8 {
    ELT_None,
    ELT_Basic,
    ELT_Average,
    ELT_Quality,
};

