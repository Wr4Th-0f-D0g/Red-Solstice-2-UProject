#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "VehiclePathfinderFinishedDelegateDelegate.h"
#include "VehiclePathGenerator.generated.h"

class AMeshSystemCenterBase;
class AMeshSystemLinkBase;
class UMeshSystemNodeComponent;
class USplineComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UVehiclePathGenerator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehiclePathfinderFinishedDelegate FinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartRunParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndRunParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMeshSystemCenterBase* StartCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMeshSystemCenterBase* EndCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshSystemNodeComponent* FirstExitNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemCenterBase*> ResultCentersArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplinePoint> ResultSplinePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemLinkBase*> ForbidenLinks;
    
public:
    UVehiclePathGenerator();

    UFUNCTION(BlueprintCallable)
    void SetupSplineComponentWithResults(USplineComponent* InSpline);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPath(const FVector& PathStart, const FVector& PathEnd, float Tolerance, bool bExtendToExitNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSplinePoint> GetResultSplinePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMeshSystemCenterBase*> GetResultCentersArray();
    
    UFUNCTION(BlueprintCallable)
    void AddForbiddenLinks(TArray<AMeshSystemLinkBase*> InLinks);
    
};

