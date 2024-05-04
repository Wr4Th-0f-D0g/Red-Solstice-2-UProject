#include "Killzone.h"
#include "Components/SceneComponent.h"

AKillzone::AKillzone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->KillMode = EKillzoneMode::KillzoneModeConstant;
}

void AKillzone::SetKillMode(EKillzoneMode aMode) {
}

EKillzoneMode AKillzone::GetKillMode() {
    return EKillzoneMode::KillzoneModeConstant;
}

void AKillzone::Fire() {
}

void AKillzone::ActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


