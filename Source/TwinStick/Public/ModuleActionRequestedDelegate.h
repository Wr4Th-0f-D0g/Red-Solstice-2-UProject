#pragma once
#include "CoreMinimal.h"
#include "EEquipAction.h"
#include "ModuleInfo.h"
#include "ModuleActionRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModuleActionRequested, FModuleInfo, ModuleInfo, EEquipAction, EquipAction);

