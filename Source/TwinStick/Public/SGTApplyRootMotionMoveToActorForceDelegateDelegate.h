#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SGTApplyRootMotionMoveToActorForceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSGTApplyRootMotionMoveToActorForceDelegate, bool, bDestinationReached, bool, bTimedOut, FVector, FinalTargetLocation);

