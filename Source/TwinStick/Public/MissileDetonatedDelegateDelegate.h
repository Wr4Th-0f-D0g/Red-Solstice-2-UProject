#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissileDetonatedDelegateDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissileDetonatedDelegate, FVector, OutLocation, UParticleSystemComponent*, OutParticleSystem);

