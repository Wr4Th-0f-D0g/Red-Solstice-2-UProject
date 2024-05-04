#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExperienceAwardedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FExperienceAwarded, float, AccountXP, float, MatchXP, FVector, Locaton, AActor*, Instigator, float, Range);

