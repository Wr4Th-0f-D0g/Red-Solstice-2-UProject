#include "SpringArm.h"

FSpringArm::FSpringArm() {
    this->TargetArmLength = 0.00f;
    this->ProbeSize = 0.00f;
    this->ProbeChannel = ECC_WorldStatic;
    this->bDoCollisionTest = false;
    this->bInheritPitch = false;
    this->bInheritYaw = false;
    this->bInheritRoll = false;
    this->bDebugSpringArm = false;
}

