#pragma once
#include "CoreMinimal.h"
#include "PlayerSkillShout.h"
#include "PlayerSkillShoutDelegateDelegate.generated.h"

class ARTS_PlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSkillShoutDelegate, FPlayerSkillShout, SkillShoutData, ARTS_PlayerState*, Shouter);

