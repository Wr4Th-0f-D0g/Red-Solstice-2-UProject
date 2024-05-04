#pragma once
#include "CoreMinimal.h"
#include "TeamBotsChangedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTeamBotsChanged, const TArray<UBotStatus*>&, Bots);

