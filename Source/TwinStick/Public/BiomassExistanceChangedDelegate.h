#pragma once
#include "CoreMinimal.h"
#include "BiomassExistanceChangedDelegate.generated.h"

class ABiomassCenterActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBiomassExistanceChanged, ABiomassCenterActor*, BiomassChanged);

