#pragma once
#include "CoreMinimal.h"
#include "ESolsticeSteamOverlayToStoreFlag.generated.h"

UENUM(BlueprintType)
enum class ESolsticeSteamOverlayToStoreFlag : uint8 {
    None,
    AddToCart,
    AddToCartAndShow,
};

