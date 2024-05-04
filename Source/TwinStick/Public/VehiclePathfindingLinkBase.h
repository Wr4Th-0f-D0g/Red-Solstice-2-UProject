#pragma once
#include "CoreMinimal.h"
#include "MeshSystemLinkBase.h"
#include "VehiclePathfindingLinkBase.generated.h"

class UMeshSystemNodeComponent;
class USplineComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AVehiclePathfindingLinkBase : public AMeshSystemLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ConnectionSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasValidOverlapLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineOverTerrainHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAdjustmentInterval;
    
    AVehiclePathfindingLinkBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDestroyNiagaraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LinkedStatusChanged(bool bFullyLinked);
    
    UFUNCTION(BlueprintCallable)
    void HandleNodeTransformChanged(UMeshSystemNodeComponent* InNode);
    
    UFUNCTION(BlueprintCallable)
    void AdjustSplineToTerrain();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AdjustConnectionSpline();
    
};

