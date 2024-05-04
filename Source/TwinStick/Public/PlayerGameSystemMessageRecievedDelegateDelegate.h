#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerGameSystemMessageRecievedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerGameSystemMessageRecievedDelegate, const FText&, MessageText, const FLinearColor&, MessageColor);

