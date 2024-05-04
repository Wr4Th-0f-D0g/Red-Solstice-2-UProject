#pragma once
#include "CoreMinimal.h"
#include "EAnimCallPhase.generated.h"

UENUM(BlueprintType)
enum class EAnimCallPhase : uint8 {
    AnimCallStart,
    AnimCallActionBegin,
    AnimCallActionPeak,
    AnimCallActionFinish,
    AnimCallEnd,
    AnimCallFail,
    AnimCallCanceled,
    AnimCallNone,
};

