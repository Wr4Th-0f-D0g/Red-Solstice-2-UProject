#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSurfaceType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSurfaceType : uint8 {
    Default,
    Dirt,
    Metal,
    Sand,
    Concrete,
    Water,
    Blood,
    Biomass,
    HumanFlesh,
    StrolFlesh,
};

