#pragma once
#include "CoreMinimal.h"
#include "EVisionVectorGenerationMethod.generated.h"

UENUM(BlueprintType)
enum class EVisionVectorGenerationMethod : uint8 {
    VGM_Distance,
    VGM_Angle,
    VGM_Number,
};

