#include "AimOffsetComponent.h"

UAimOffsetComponent::UAimOffsetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdjustToCamera = true;
    this->CameraAdjustTime = 0.20f;
}

void UAimOffsetComponent::SetAdjustToCamera(bool Val) {
}

void UAimOffsetComponent::HandleArmorBlocksChanged(int32 Blocks) {
}

bool UAimOffsetComponent::GetAdjustToCamera() const {
    return false;
}


