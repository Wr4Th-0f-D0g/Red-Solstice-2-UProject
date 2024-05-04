#include "RootMotionMonsterJumpSkillBase.h"

URootMotionMonsterJumpSkillBase::URootMotionMonsterJumpSkillBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootMotionSourceID = 0;
    this->bSetCollisions = false;
    this->bAutoResetCollisions = false;
    this->bIsJumping = false;
}

void URootMotionMonsterJumpSkillBase::StartRootMotionJump(const FVector& StartLoc, const FVector& EndLoc, float SpeedFactor) {
}

void URootMotionMonsterJumpSkillBase::ResetCollisions() {
}



void URootMotionMonsterJumpSkillBase::CancelRootMotion() {
}


