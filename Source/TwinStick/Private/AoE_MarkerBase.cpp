#include "AoE_MarkerBase.h"
#include "Particles/ParticleSystemComponent.h"

AAoE_MarkerBase::AAoE_MarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
    this->ParticleComponent = (UParticleSystemComponent*)RootComponent;
    this->Radius = 0.00f;
    this->ActivationRange = 0.00f;
    this->AreaEffectParticleSystem = NULL;
    this->AreaMarkerPreviewMesh = NULL;
    this->bHighlightTargets = false;
    this->TargetClassFilter = NULL;
    this->IgnoreClassFilter = NULL;
    this->bOnValidLocation = false;
    this->bOutsideMinimumRange = false;
}

void AAoE_MarkerBase::SetPawnOwner(APawn* InPawnOwner) {
}

void AAoE_MarkerBase::SetAbilityOwner(UAbilityBase* InAbilityOwner) {
}








bool AAoE_MarkerBase::IsOnValidLocation_Implementation() {
    return false;
}



