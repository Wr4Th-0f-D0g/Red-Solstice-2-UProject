#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ReplicatedMontageSimpleDelegate.generated.h"

class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplicatedMontageSimple, FGameplayTag, NotifyGameplayTag, ASolsticeCharacterBase*, Charaxter);

