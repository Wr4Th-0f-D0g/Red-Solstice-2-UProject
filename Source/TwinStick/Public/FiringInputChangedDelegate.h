#pragma once
#include "CoreMinimal.h"
#include "FiringInput.h"
#include "FiringInputChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFiringInputChanged, FFiringInput, FiringPackage);

