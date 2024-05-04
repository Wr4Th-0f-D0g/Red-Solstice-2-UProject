#include "RootMotionTask_JumpForce.h"
#include "Net/UnrealNetwork.h"

URootMotionTask_JumpForce::URootMotionTask_JumpForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Distance = 0.00f;
    this->Height = 0.00f;
    this->Duration = 0.00f;
    this->MinimumLandedTriggerTime = 0.00f;
    this->bFinishOnLanded = false;
    this->PathOffsetCurve = NULL;
    this->TimeMappingCurve = NULL;
}

void URootMotionTask_JumpForce::OnLandedCallback(const FHitResult& Hit) {
}

void URootMotionTask_JumpForce::Finish() {
}

URootMotionTask_JumpForce* URootMotionTask_JumpForce::ApplyRootMotionJumpForce(UObject* WorldContextObject, FName TaskInstanceName, FRotator NewRotation, float NewDistance, float NewHeight, float NewDuration, float NewMinimumLandedTriggerTime, bool NewBFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve) {
    return NULL;
}

void URootMotionTask_JumpForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionTask_JumpForce, Rotation);
    DOREPLIFETIME(URootMotionTask_JumpForce, Distance);
    DOREPLIFETIME(URootMotionTask_JumpForce, Height);
    DOREPLIFETIME(URootMotionTask_JumpForce, Duration);
    DOREPLIFETIME(URootMotionTask_JumpForce, MinimumLandedTriggerTime);
    DOREPLIFETIME(URootMotionTask_JumpForce, bFinishOnLanded);
    DOREPLIFETIME(URootMotionTask_JumpForce, PathOffsetCurve);
    DOREPLIFETIME(URootMotionTask_JumpForce, TimeMappingCurve);
}


