#include "ZiplineActor.h"
#include "Components/SceneComponent.h"

AZiplineActor::AZiplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ZiplineRoot"));
    this->Tags.AddDefaulted(2);
    this->NavLinkClass = NULL;
    this->PointLinks.AddDefaulted(1);
    this->ZiplineStartBox = NULL;
    this->ZiplineParticleSystem = NULL;
    this->ZiplineEndLoc = NULL;
    this->OverlapCheckTime = 0.20f;
    this->DistanceToActivateZipline = 1200.00f;
    this->SplineStartComp = NULL;
    this->NavlinkStart = NULL;
    this->NavlinkEnd = NULL;
    this->ZiplineSpeedFactor = 1.30f;
    this->ZiplineCooldown = 1.00f;
}

void AZiplineActor::UpdateNavlink() {
}



