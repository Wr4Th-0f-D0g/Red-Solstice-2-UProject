#pragma once
#include "CoreMinimal.h"
#include "ESuitSection.h"
#include "ModuleListRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModuleListRequested, ESuitSection, SuitSection);

