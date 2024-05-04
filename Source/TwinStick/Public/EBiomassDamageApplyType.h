#pragma once
#include "CoreMinimal.h"
#include "EBiomassDamageApplyType.generated.h"

UENUM(BlueprintType)
enum class EBiomassDamageApplyType : uint8 {
    BDATypeAdditive,
    BDATypeMax,
};

