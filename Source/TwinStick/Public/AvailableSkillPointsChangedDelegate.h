#pragma once
#include "CoreMinimal.h"
#include "AvailableSkillPointsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAvailableSkillPointsChanged, int32, SkillPoints);

