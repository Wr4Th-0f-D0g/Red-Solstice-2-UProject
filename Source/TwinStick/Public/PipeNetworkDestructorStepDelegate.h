#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PipeNetworkDestructorStepDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPipeNetworkDestructorStep, const FVector&, Location, float, Damage, float, ExplosionStrength, APawn*, Instigator, UClass*, DamageSource);

