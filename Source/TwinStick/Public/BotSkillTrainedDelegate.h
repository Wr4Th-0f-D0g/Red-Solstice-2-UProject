#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BotSkillTrainedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBotSkillTrained, UBotStatus*, Bot, const FGameplayTag&, SkillTag);

