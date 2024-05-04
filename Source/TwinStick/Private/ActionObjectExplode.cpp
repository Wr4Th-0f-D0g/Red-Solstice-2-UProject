#include "ActionObjectExplode.h"

UActionObjectExplode::UActionObjectExplode() {
    this->Radius = 0.00f;
    this->Instigator = NULL;
    this->RealDamageSource = NULL;
    this->bCameraShake = true;
    this->CameraShakeType = NULL;
    this->CameraShakeRadiusMultiplyer = 3.00f;
    this->CameraShakeScale = 1.00f;
    this->DebugDrawExplosion = false;
}

UDecalComponent* UActionObjectExplode::SpawnExplosionDecal(FVector InPosition, FVector InNormal) {
    return NULL;
}

UParticleSystemComponent* UActionObjectExplode::PlayExplosionEffects(const FTransform& InTransform) {
    return NULL;
}

void UActionObjectExplode::Detonate(UDecalComponent*& OutDecal, UParticleSystemComponent*& OutParticleComponent, bool bPlayEffects) {
}

void UActionObjectExplode::AddIgnoreTag(FName InTag) {
}

void UActionObjectExplode::AddAppliedBuff(const FApplyBuffEffect& InBuff) {
}


