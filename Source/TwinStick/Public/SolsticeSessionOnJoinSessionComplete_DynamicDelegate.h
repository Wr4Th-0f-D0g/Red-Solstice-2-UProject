#pragma once
#include "CoreMinimal.h"
#include "SolsticeOnlineResultInformation.h"
#include "SolsticeSessionOnJoinSessionComplete_DynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSolsticeSessionOnJoinSessionComplete_Dynamic, const FSolsticeOnlineResultInformation&, Result);

