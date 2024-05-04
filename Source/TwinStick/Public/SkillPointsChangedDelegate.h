#pragma once
#include "CoreMinimal.h"
#include "SkillPointsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkillPointsChanged, int32, Available, int32, Total);

