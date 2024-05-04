#pragma once
#include "CoreMinimal.h"
#include "BotModuleUnlockedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBotModuleUnlocked, UBotStatus*, Bot, FName, ModuleName);

