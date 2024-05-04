#pragma once
#include "CoreMinimal.h"
#include "ECivilianWaitType.h"
#include "CivilianWaitTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCivilianWaitTypeChanged, ECivilianWaitType, NewWait, ECivilianWaitType, PrevWait);

