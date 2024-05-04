#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BiomassDamagedDelegate.generated.h"

class ABiomassCenterActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBiomassDamaged, ABiomassCenterActor*, CenterActor, FVector, Location, float, InitRadius);

