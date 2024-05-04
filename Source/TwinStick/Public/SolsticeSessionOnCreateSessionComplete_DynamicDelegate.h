#pragma once
#include "CoreMinimal.h"
#include "SolsticeOnlineResultInformation.h"
#include "SolsticeSessionOnCreateSessionComplete_DynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSolsticeSessionOnCreateSessionComplete_Dynamic, const FSolsticeOnlineResultInformation&, Result);

