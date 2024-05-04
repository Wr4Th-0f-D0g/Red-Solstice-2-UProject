#include "BodyPartBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"

ABodyPartBase::ABodyPartBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
    this->RotationMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotationComponent"));
    this->ImpactSoundComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("SoundComponent"));
    this->BloodSplashParticleEffectFX = NULL;
    this->ImpactSound = NULL;
    this->BloodSplatPSC = NULL;
    this->BloodDecalMaterial = NULL;
    this->DecalLifetime = 0.00f;
    this->MinTimeBetweenDecalEffects = 0.00f;
    this->TimeToLive = 0.00f;
    this->Bounciness = 0.30f;
    this->Friction = 0.40f;
    this->StaticMesh->SetupAttachment(RootComponent);
    this->ImpactSoundComponent->SetupAttachment(RootComponent);
}

void ABodyPartBase::SetRotationMovement(URotatingMovementComponent* Val) {
}

bool ABodyPartBase::IsActing() const {
    return false;
}

URotatingMovementComponent* ABodyPartBase::GetRotationMovement() const {
    return NULL;
}

void ABodyPartBase::BodyPartStoppedMoving(const FHitResult& ImpactResult) {
}

void ABodyPartBase::BodyPartCollision(UPrimitiveComponent* aHitComponent, AActor* aOtherActor, UPrimitiveComponent* aOtherComp, FVector aNormalImpulse, const FHitResult& aHit) {
}


