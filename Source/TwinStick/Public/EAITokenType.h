#pragma once
#include "CoreMinimal.h"
#include "EAITokenType.generated.h"

UENUM(BlueprintType)
enum class EAITokenType : uint8 {
    ETT_SpawnToken,
    ETT_AttackToken,
    ETT_SpecialToken,
    ETT_DogToken,
    ETT_SnatcherToken,
    ETT_CreeperToken,
};

