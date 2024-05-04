#pragma once
#include "CoreMinimal.h"
#include "EBiomassForbiddenZoneType.generated.h"

UENUM(BlueprintType)
enum class EBiomassForbiddenZoneType : uint8 {
    None,
    DontTouchBiomassCenter,
    DontTouchBiomassRange,
};

