#pragma once
#include "CoreMinimal.h"
#include "EArtillerySupportLevel.generated.h"

UENUM(BlueprintType)
enum class EArtillerySupportLevel : uint8 {
    None,
    Light,
    Heavy,
};

