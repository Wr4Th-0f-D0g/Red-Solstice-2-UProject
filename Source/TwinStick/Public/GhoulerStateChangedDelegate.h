#pragma once
#include "CoreMinimal.h"
#include "EGhoulerState.h"
#include "GhoulerStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGhoulerStateChanged, EGhoulerState, NewState, EGhoulerState, PrevState);

