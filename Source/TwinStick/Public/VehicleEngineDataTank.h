#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "VehicleEngineDataTank.generated.h"

USTRUCT(BlueprintType)
struct FVehicleEngineDataTank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve TorqueCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MOI;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingRateFullThrottle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingRateZeroThrottleClutchEngaged;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingRateZeroThrottleClutchDisengaged;
    
    TWINSTICK_API FVehicleEngineDataTank();
};

