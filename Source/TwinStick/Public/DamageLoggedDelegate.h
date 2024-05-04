#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "DamageLoggedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageLogged, const FGameplayTag&, DamageSourceTag, const FDamage&, DamageInfo);

