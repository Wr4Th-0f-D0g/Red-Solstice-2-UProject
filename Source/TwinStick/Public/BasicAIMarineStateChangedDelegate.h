#pragma once
#include "CoreMinimal.h"
#include "EBasicAIMarineState.h"
#include "BasicAIMarineStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBasicAIMarineStateChanged, EBasicAIMarineState, NewState, EBasicAIMarineState, PrevState);

