#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCharacterNameMessageRecievedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterNameMessageRecievedDelegate, const FText&, MessageText, const FLinearColor&, MessageColor);

