#pragma once
#include "CoreMinimal.h"
#include "BotRankChangedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBotRankChanged, UBotStatus*, Bot, int32, Rank);

