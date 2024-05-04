#pragma once
#include "CoreMinimal.h"
#include "EPointGenerationType.generated.h"

UENUM(BlueprintType)
enum class EPointGenerationType : uint8 {
    GTAmbush,
    GTNonAmbushClose,
    GTNonAmbushFar,
    GTTentacle,
};

