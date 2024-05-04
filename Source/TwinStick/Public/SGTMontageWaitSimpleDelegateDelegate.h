#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SGTMontageWaitSimpleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSGTMontageWaitSimpleDelegate, FGameplayTag, NotifyGameplayTag);

