#pragma once
#include "CoreMinimal.h"
#include "BotStatusChangedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBotStatusChanged, UBotStatus*, NewBotStatus);

