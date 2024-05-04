#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PrimaryMissionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrimaryMissionChanged, const FGameplayTag&, MissionTag);

