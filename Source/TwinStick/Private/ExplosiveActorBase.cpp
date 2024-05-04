#include "ExplosiveActorBase.h"

AExplosiveActorBase::AExplosiveActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableHover = false;
    this->bCanRemoteDetonate = false;
    this->bIgnoreNextUnhover = false;
}

void AExplosiveActorBase::PreviewDetonate() {
}

void AExplosiveActorBase::MarkIgnoreNextUnhover() {
}




float AExplosiveActorBase::GetBaseExplosiveDamage_Implementation() const {
    return 0.0f;
}

void AExplosiveActorBase::EndPreviewDetonate() {
}

void AExplosiveActorBase::EndHover(AActor* Actor) {
}

void AExplosiveActorBase::Detonate() {
}

void AExplosiveActorBase::BeginHover(AActor* Actor) {
}


