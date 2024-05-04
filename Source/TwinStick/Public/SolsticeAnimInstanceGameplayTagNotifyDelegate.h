#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "SolsticeAnimInstanceGameplayTagNotifyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSolsticeAnimInstanceGameplayTagNotify, FGameplayTag, GameplayTag, const FBranchingPointNotifyPayload&, BranchingPointPayload);

