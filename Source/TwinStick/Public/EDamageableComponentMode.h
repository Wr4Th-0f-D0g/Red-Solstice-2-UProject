#pragma once
#include "CoreMinimal.h"
#include "EDamageableComponentMode.generated.h"

UENUM(BlueprintType)
enum class EDamageableComponentMode : uint8 {
    DamageableModeRelayDamage,
    DamageableModeTakeDamage,
};

