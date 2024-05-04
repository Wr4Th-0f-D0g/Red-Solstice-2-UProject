#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SolsticeMathLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeMathLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TimeSpanToFloat(FTimespan InTimespan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomNegateFloat(float InFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineIntersect(const FVector2D& L1Start, const FVector2D& L1End, const FVector2D& L2Start, const FVector2D& L2End, FVector2D& Intersect, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInsidePolygon(FVector2D TestPoint, TArray<FVector2D> PolygonPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInsideCone(const UObject* WorldContextObject, const FVector ConeOrigin, const FVector ConeDirection, const float ConeAngle, const FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInCone(FVector ConeOrigin, FVector ConeDirection, float ConeHalfAngle, FVector Point, bool bIgnoreZ);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetEquidistantTargetLocationsInCone(FVector InMiddleTargetLocation, FVector InCenterLocation, float InDistBetweenTargets, int32 InNumTargets);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> ExponentialDistributionRandomSampleSize(float Mean, int32 SampleSize, bool bUseLowerBounds, float LowerBounds, bool bUseUpperBounds, float UpperBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ExponentialDistributionRandom(float Mean, bool bUseLowerBounds, float LowerBounds, bool bUseUpperBounds, float UpperBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DistanceBetweenActors2D(AActor* Actor1, AActor* Actor2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DistanceBetweenActors(AActor* Actor1, AActor* Actor2);
    
    UFUNCTION(BlueprintCallable)
    static void ClampPointWithinCone(FVector ConeOrigin, FVector ConeDirection, float ConeHalfAngleDegrees, UPARAM(Ref) FVector& TargetPoint, bool& TargetPointAdjusted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenVectors(FVector VectorA, FVector VectorB);
    
};

