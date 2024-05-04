#include "AtrocityRock.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"

AAtrocityRock::AAtrocityRock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PMC = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("PMC"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->RMC = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RMC"));
}

void AAtrocityRock::OnStop(const FHitResult& ImpactResult) {
}

void AAtrocityRock::OnRockHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AAtrocityRock::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}


