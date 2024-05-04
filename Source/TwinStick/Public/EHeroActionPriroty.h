#pragma once
#include "CoreMinimal.h"
#include "EHeroActionPriroty.generated.h"

UENUM(BlueprintType)
enum class EHeroActionPriroty : uint8 {
    EAP_Fire,
    EAP_Interact,
};

