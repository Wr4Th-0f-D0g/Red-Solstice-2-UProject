#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.h"
#include "SkillChangedDelegate.generated.h"

class USkill;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSkillChanged, USkill*, NewSkill, ESkillSlot, Slot, int32, SlotIndex);

