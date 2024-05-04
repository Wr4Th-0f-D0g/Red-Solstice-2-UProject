#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnTagUpdatedDelegate.generated.h"

class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTagUpdated, ASolsticeCharacterBase*, Character, FGameplayTag, UpdatedTag);

