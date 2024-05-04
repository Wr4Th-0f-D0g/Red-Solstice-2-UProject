#pragma once
#include "CoreMinimal.h"
#include "SelectedCombatLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedCombatLevelChanged, const FName&, LevelName);

