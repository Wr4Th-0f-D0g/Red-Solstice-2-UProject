#pragma once
#include "CoreMinimal.h"
#include "PreviewBotChangedDelegate.generated.h"

class UBotStatus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreviewBotChanged, UBotStatus*, NewBot);

