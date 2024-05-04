#pragma once
#include "CoreMinimal.h"
#include "ActorPathData.h"
#include "SortActorsByNavDistanceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSortActorsByNavDistanceDelegate, const TArray<FActorPathData>&, OutActors);

