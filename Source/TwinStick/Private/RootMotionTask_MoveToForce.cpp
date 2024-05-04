#include "RootMotionTask_MoveToForce.h"
#include "Net/UnrealNetwork.h"

URootMotionTask_MoveToForce::URootMotionTask_MoveToForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Duration = 0.00f;
    this->bSetNewMovementMode = false;
    this->NewMovementMode = MOVE_Walking;
    this->bRestrictSpeedToExpected = false;
    this->PathOffsetCurve = NULL;
}

URootMotionTask_MoveToForce* URootMotionTask_MoveToForce::ApplyRootMotionMoveToForce(UObject* WorldContextObject, FName TaskInstanceName, FVector NewTargetLocation, float NewDuration, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) {
    return NULL;
}

void URootMotionTask_MoveToForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionTask_MoveToForce, StartLocation);
    DOREPLIFETIME(URootMotionTask_MoveToForce, TargetLocation);
    DOREPLIFETIME(URootMotionTask_MoveToForce, Duration);
    DOREPLIFETIME(URootMotionTask_MoveToForce, bSetNewMovementMode);
    DOREPLIFETIME(URootMotionTask_MoveToForce, NewMovementMode);
    DOREPLIFETIME(URootMotionTask_MoveToForce, bRestrictSpeedToExpected);
    DOREPLIFETIME(URootMotionTask_MoveToForce, PathOffsetCurve);
}


