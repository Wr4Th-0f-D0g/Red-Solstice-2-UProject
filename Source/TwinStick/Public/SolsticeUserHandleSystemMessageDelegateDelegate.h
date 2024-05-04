#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SolsticeUserHandleSystemMessageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSolsticeUserHandleSystemMessageDelegate, FGameplayTag, MessageType, FGameplayTag, Message, const FString&, Additional);

