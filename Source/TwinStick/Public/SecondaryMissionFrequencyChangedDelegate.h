#pragma once
#include "CoreMinimal.h"
#include "ESecondaryMissionFrequency.h"
#include "SecondaryMissionFrequencyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSecondaryMissionFrequencyChanged, ESecondaryMissionFrequency, Frequency);

