#pragma once
#include "CoreMinimal.h"
#include "PlayerGameChatMessageRecievedDelegateDelegate.generated.h"

class ASolsticePlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerGameChatMessageRecievedDelegate, ASolsticePlayerState*, SenderPlayerState, const FString&, MessageText);

