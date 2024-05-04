#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "TeamCompositionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTeamCompositionChanged, const TArray<ESolsticeHeroClass>&, TeamComposition);

