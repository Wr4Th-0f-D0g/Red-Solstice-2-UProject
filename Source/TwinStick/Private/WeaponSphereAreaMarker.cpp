#include "WeaponSphereAreaMarker.h"
#include "Particles/ParticleSystemComponent.h"

AWeaponSphereAreaMarker::AWeaponSphereAreaMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
    this->ParticleComponent = (UParticleSystemComponent*)RootComponent;
    this->ParticleSystem = NULL;
    this->Radius = 0.00f;
}


