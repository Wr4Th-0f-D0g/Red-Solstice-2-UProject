#include "ActivationBase.h"

UActivationBase::UActivationBase() {
    this->ActivationStatus = EActivationStatus::EAS_Inactive;
    this->bShouldRegisterAsActive = true;
    this->bForceStopMovementOnFire = false;
    this->AreaMarkerClass = NULL;
    this->AreaMarkerParticleSystem = NULL;
    this->AreaMarkerPreviewMesh = NULL;
    this->MarkerActor = NULL;
}

void UActivationBase::HandleMoveCompleted(FAIRequestID ID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

float UActivationBase::GetPercentCharged() const {
    return 0.0f;
}

FActivationParameters UActivationBase::GetActivationParameters() const {
    return FActivationParameters{};
}


