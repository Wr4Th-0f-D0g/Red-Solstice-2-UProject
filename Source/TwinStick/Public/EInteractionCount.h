#pragma once
#include "CoreMinimal.h"
#include "EInteractionCount.generated.h"

UENUM(BlueprintType)
enum class EInteractionCount : uint8 {
    EIC_None,
    EIC_SingleUse,
    EIC_UseOncePerReset,
    EIC_Limited,
    EIC_Infinite,
};

