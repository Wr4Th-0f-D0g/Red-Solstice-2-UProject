#pragma once
#include "CoreMinimal.h"
#include "EHarpoonType.h"
#include "MonsterHarpoonedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMonsterHarpooned, EHarpoonType, HarpoonType);

