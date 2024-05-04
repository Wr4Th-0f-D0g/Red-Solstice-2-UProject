#pragma once
#include "CoreMinimal.h"
#include "ECharacterType.generated.h"

UENUM(BlueprintType)
enum class ECharacterType : uint8 {
    ECT_Hero,
    ECT_Monster,
    ECT_Civilian,
    ECT_Follower,
    ECT_EnemyMarine,
    ECT_BasicBot,
};

