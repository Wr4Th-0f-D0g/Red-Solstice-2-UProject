#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissileLaunchedDelegateDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissileLaunchedDelegate, FVector, OutLocation, UParticleSystemComponent*, OutParticleSystem);

