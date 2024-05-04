#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIMarineSkillUseValidLocDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAIMarineSkillUseValidLoc, bool, bFoundValidPos, const FVector&, SkillUsageLoc, bool, bRequiresManualMovement);

