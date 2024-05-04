#pragma once
#include "CoreMinimal.h"
#include "MeshSystemCenterBase.h"
#include "SplineNodeMapingStruct.h"
#include "VehiclePathfindingCenterBase.generated.h"

class UMeshSystemNodeComponent;
class USplineComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AVehiclePathfindingCenterBase : public AMeshSystemCenterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineNodeMapingStruct> SplineNodeMaping;
    
    AVehiclePathfindingCenterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MarkConnectedCenters();
    
    UFUNCTION(BlueprintCallable)
    bool FindNavPointsForSpline(UMeshSystemNodeComponent*& OutInitPoint, UMeshSystemNodeComponent*& OutEndPoint, USplineComponent* InSplineComp);
    
    UFUNCTION(BlueprintCallable)
    bool FindFindSplineFromNavPointToNavPoint(USplineComponent*& OutSpline, bool& bOutReversed, UMeshSystemNodeComponent* InInitPoint, UMeshSystemNodeComponent* InEndPoint);
    
    UFUNCTION(BlueprintCallable)
    void AdjustConnectionSplines();
    
};

