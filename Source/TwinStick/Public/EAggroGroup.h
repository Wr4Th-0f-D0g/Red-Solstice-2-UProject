#pragma once
#include "CoreMinimal.h"
#include "EAggroGroup.generated.h"

UENUM(BlueprintType)
enum class EAggroGroup : uint8 {
    EAG_Marine,
    EAG_EnemyMarine,
    EAG_Civilian,
    EAG_Monster,
    EAG_Environment,
    EAG_AggroGenerator,
    EAG_FriendlyBots,
};

