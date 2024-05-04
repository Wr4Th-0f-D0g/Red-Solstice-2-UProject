#pragma once
#include "CoreMinimal.h"
#include "SpecialistsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSpecialistsChanged, int32, Scientists, int32, Engineers, int32, Free);

