#pragma once
#include "CoreMinimal.h"
#include "SkillFiredDelegate.generated.h"

class UAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillFired, UAbilityBase*, Ability);

