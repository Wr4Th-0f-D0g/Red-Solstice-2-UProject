#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "DcxDrivableSurfaceToTireFrictionPair.h"
#include "DcxVehicleTire.generated.h"

UCLASS(Blueprintable)
class DCXVEHICLE_API UDcxVehicleTire : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralStiffnessX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralStiffnessY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongitudinalStiffnessPerUnitGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamberStiffnessPerUnitGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FrictionVsSlipGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs;
    
    UDcxVehicleTire();

};

