#pragma once
#include "CoreMinimal.h"
#include "SelectedBotsChangedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedBotsChanged, const TArray<UBotStatus*>&, Bots);

