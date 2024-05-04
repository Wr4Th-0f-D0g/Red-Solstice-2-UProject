#pragma once
#include "CoreMinimal.h"
#include "EUtilitySkill.h"
#include "UtilitySkillChangedDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUtilitySkillChanged, USkill*, SkillRef, EUtilitySkill, SkillType);

