#include "VehiclePathfindingCenterBase.h"

AVehiclePathfindingCenterBase::AVehiclePathfindingCenterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AVehiclePathfindingCenterBase::MarkConnectedCenters() {
}

bool AVehiclePathfindingCenterBase::FindNavPointsForSpline(UMeshSystemNodeComponent*& OutInitPoint, UMeshSystemNodeComponent*& OutEndPoint, USplineComponent* InSplineComp) {
    return false;
}

bool AVehiclePathfindingCenterBase::FindFindSplineFromNavPointToNavPoint(USplineComponent*& OutSpline, bool& bOutReversed, UMeshSystemNodeComponent* InInitPoint, UMeshSystemNodeComponent* InEndPoint) {
    return false;
}

void AVehiclePathfindingCenterBase::AdjustConnectionSplines() {
}


