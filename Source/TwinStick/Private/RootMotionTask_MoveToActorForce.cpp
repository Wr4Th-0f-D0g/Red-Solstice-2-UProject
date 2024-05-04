#include "RootMotionTask_MoveToActorForce.h"
#include "Net/UnrealNetwork.h"

URootMotionTask_MoveToActorForce::URootMotionTask_MoveToActorForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActor = NULL;
    this->TargetReachedDistance = 0.00f;
    this->OffsetAlignment = EGSTRootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource;
    this->Duration = 0.00f;
    this->bDisableDestinationReachedInterrupt = false;
    this->bSetNewMovementMode = false;
    this->NewMovementMode = MOVE_Walking;
    this->bRestrictSpeedToExpected = false;
    this->PathOffsetCurve = NULL;
    this->TimeMappingCurve = NULL;
    this->TargetLerpSpeedHorizontalCurve = NULL;
    this->TargetLerpSpeedVerticalCurve = NULL;
}

void URootMotionTask_MoveToActorForce::OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget) {
}

void URootMotionTask_MoveToActorForce::OnRep_TargetLocation() {
}

URootMotionTask_MoveToActorForce* URootMotionTask_MoveToActorForce::ApplyRootMotionMoveToActorForce(UObject* WorldContextObject, FName TaskInstanceName, AActor* NewTargetActor, FVector NewTargetLocationOffset, EGSTRootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt, float TargetReachedThreshold) {
    return NULL;
}

void URootMotionTask_MoveToActorForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, StartLocation);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TargetLocation);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TargetActor);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TargetReachedDistance);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TargetLocationOffset);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, OffsetAlignment);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, Duration);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, bDisableDestinationReachedInterrupt);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, bSetNewMovementMode);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, NewMovementMode);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, bRestrictSpeedToExpected);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, PathOffsetCurve);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TimeMappingCurve);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TargetLerpSpeedHorizontalCurve);
    DOREPLIFETIME(URootMotionTask_MoveToActorForce, TargetLerpSpeedVerticalCurve);
}


