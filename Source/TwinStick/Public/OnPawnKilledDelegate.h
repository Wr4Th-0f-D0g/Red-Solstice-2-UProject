#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "OnPawnKilledDelegate.generated.h"

class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPawnKilled, ASolsticeCharacterBase*, KilledPawn, const FGameplayTagContainer&, PawnTags, const FDamage&, DamageInfo);

