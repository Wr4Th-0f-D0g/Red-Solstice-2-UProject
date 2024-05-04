#include "VehiclePathfindingLinkBase.h"
#include "Components/SplineComponent.h"

AVehiclePathfindingLinkBase::AVehiclePathfindingLinkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ConnectionSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ConnectionSpline"));
    this->bHasValidOverlapLink = false;
    this->SplineOverTerrainHeight = 30.00f;
    this->SplineAdjustmentInterval = 200.00f;
    this->ConnectionSpline->SetupAttachment(RootComponent);
}

bool AVehiclePathfindingLinkBase::ShouldDestroyNiagaraComponent() const {
    return false;
}


void AVehiclePathfindingLinkBase::HandleNodeTransformChanged(UMeshSystemNodeComponent* InNode) {
}

void AVehiclePathfindingLinkBase::AdjustSplineToTerrain() {
}

void AVehiclePathfindingLinkBase::AdjustConnectionSpline() {
}


