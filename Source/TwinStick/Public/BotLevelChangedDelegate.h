#pragma once
#include "CoreMinimal.h"
#include "BotLevelChangedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBotLevelChanged, UBotStatus*, Bot, int32, Level);

