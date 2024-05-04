#pragma once
#include "CoreMinimal.h"
#include "ECivilianMovementStatus.h"
#include "CivilianMovementStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCivilianMovementStatusChanged, ECivilianMovementStatus, NewStatus, ECivilianMovementStatus, PrevStatus);

