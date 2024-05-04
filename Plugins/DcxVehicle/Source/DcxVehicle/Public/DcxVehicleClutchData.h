#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleClutchAccuracyMode.h"
#include "DcxVehicleClutchData.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleClutchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BitePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDcxVehicleClutchAccuracyMode::Type> AccuracyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EstimateIterations;
    
    FDcxVehicleClutchData();
};

