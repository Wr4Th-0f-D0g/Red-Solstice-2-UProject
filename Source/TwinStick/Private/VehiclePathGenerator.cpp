#include "VehiclePathGenerator.h"

UVehiclePathGenerator::UVehiclePathGenerator() {
    this->bExtendPath = true;
    this->StartCenter = NULL;
    this->EndCenter = NULL;
    this->FirstExitNode = NULL;
}

void UVehiclePathGenerator::SetupSplineComponentWithResults(USplineComponent* InSpline) {
}

bool UVehiclePathGenerator::RequestPath(const FVector& PathStart, const FVector& PathEnd, float Tolerance, bool bExtendToExitNode) {
    return false;
}

TArray<FSplinePoint> UVehiclePathGenerator::GetResultSplinePoints() {
    return TArray<FSplinePoint>();
}

TArray<AMeshSystemCenterBase*> UVehiclePathGenerator::GetResultCentersArray() {
    return TArray<AMeshSystemCenterBase*>();
}

void UVehiclePathGenerator::AddForbiddenLinks(TArray<AMeshSystemLinkBase*> InLinks) {
}


