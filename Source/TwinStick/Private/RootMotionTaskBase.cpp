#include "RootMotionTaskBase.h"
#include "Net/UnrealNetwork.h"

URootMotionTaskBase::URootMotionTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->FinishClampVelocity = 0.00f;
    this->MovementComponent = NULL;
}

void URootMotionTaskBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionTaskBase, ForceName);
    DOREPLIFETIME(URootMotionTaskBase, FinishVelocityMode);
    DOREPLIFETIME(URootMotionTaskBase, FinishSetVelocity);
    DOREPLIFETIME(URootMotionTaskBase, FinishClampVelocity);
}


