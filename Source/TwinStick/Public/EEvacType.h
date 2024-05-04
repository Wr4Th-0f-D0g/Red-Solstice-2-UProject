#pragma once
#include "CoreMinimal.h"
#include "EEvacType.generated.h"

UENUM(BlueprintType)
enum class EEvacType : uint8 {
    Dropship,
    Train,
    APC,
};

