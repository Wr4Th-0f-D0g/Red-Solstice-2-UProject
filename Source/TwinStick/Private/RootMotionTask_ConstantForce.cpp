#include "RootMotionTask_ConstantForce.h"
#include "Net/UnrealNetwork.h"

URootMotionTask_ConstantForce::URootMotionTask_ConstantForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->bIsAdditive = false;
    this->StrengthOverTime = NULL;
}

URootMotionTask_ConstantForce* URootMotionTask_ConstantForce::ApplyRootMotionTask_ConstantForce(UObject* WorldContextObject, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) {
    return NULL;
}

void URootMotionTask_ConstantForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionTask_ConstantForce, WorldDirection);
    DOREPLIFETIME(URootMotionTask_ConstantForce, Strength);
    DOREPLIFETIME(URootMotionTask_ConstantForce, Duration);
    DOREPLIFETIME(URootMotionTask_ConstantForce, bIsAdditive);
    DOREPLIFETIME(URootMotionTask_ConstantForce, StrengthOverTime);
}


