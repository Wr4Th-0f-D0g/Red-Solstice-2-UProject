#pragma once
#include "CoreMinimal.h"
#include "BiomassRadiusChangedDelegate.generated.h"

class ABiomassCenterActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBiomassRadiusChanged, ABiomassCenterActor*, BiomassActor, float, OldRadius, float, NewRadius);

