#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "SystemMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSystemMessage, bool, bIsToAll, const FText&, Message, FSlateColor, MessageColor);

