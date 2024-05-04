#include "SolsticeMathLibrary.h"

USolsticeMathLibrary::USolsticeMathLibrary() {
}

float USolsticeMathLibrary::TimeSpanToFloat(FTimespan InTimespan) {
    return 0.0f;
}

float USolsticeMathLibrary::RandomNegateFloat(float InFloat) {
    return 0.0f;
}

bool USolsticeMathLibrary::LineIntersect(const FVector2D& L1Start, const FVector2D& L1End, const FVector2D& L2Start, const FVector2D& L2End, FVector2D& Intersect, float Tolerance) {
    return false;
}

bool USolsticeMathLibrary::IsPointInsidePolygon(FVector2D TestPoint, TArray<FVector2D> PolygonPoints) {
    return false;
}

bool USolsticeMathLibrary::IsInsideCone(const UObject* WorldContextObject, const FVector ConeOrigin, const FVector ConeDirection, const float ConeAngle, const FVector Point) {
    return false;
}

bool USolsticeMathLibrary::IsInCone(FVector ConeOrigin, FVector ConeDirection, float ConeHalfAngle, FVector Point, bool bIgnoreZ) {
    return false;
}

TArray<FVector> USolsticeMathLibrary::GetEquidistantTargetLocationsInCone(FVector InMiddleTargetLocation, FVector InCenterLocation, float InDistBetweenTargets, int32 InNumTargets) {
    return TArray<FVector>();
}

TArray<float> USolsticeMathLibrary::ExponentialDistributionRandomSampleSize(float Mean, int32 SampleSize, bool bUseLowerBounds, float LowerBounds, bool bUseUpperBounds, float UpperBounds) {
    return TArray<float>();
}

float USolsticeMathLibrary::ExponentialDistributionRandom(float Mean, bool bUseLowerBounds, float LowerBounds, bool bUseUpperBounds, float UpperBounds) {
    return 0.0f;
}

float USolsticeMathLibrary::DistanceBetweenActors2D(AActor* Actor1, AActor* Actor2) {
    return 0.0f;
}

float USolsticeMathLibrary::DistanceBetweenActors(AActor* Actor1, AActor* Actor2) {
    return 0.0f;
}

void USolsticeMathLibrary::ClampPointWithinCone(FVector ConeOrigin, FVector ConeDirection, float ConeHalfAngleDegrees, FVector& TargetPoint, bool& TargetPointAdjusted) {
}

float USolsticeMathLibrary::AngleBetweenVectors(FVector VectorA, FVector VectorB) {
    return 0.0f;
}


