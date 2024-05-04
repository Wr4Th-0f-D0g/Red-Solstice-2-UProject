#pragma once
#include "CoreMinimal.h"
#include "ECivilianChosenMovement.h"
#include "CivilianChosenMovementChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCivilianChosenMovementChanged, ECivilianChosenMovement, NewMovement, ECivilianChosenMovement, PrevMovement);

