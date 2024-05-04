#pragma once
#include "CoreMinimal.h"
#include "BlackOpsDeployedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlackOpsDeployed, UBotStatus*, BotStatus);

