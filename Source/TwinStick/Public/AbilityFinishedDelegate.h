#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityFinishedDelegate.generated.h"

class UAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityFinished, UAbilityBase*, Ability, const FGameplayTag&, AbilityTag);

