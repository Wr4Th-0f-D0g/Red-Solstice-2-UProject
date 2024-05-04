#pragma once
#include "CoreMinimal.h"
#include "EGSTRootMotionMoveToActorTargetOffsetType.generated.h"

UENUM(BlueprintType)
enum class EGSTRootMotionMoveToActorTargetOffsetType : uint8 {
    AlignFromTargetToSource,
    AlignToTargetForward,
    AlignToWorldSpace,
};

