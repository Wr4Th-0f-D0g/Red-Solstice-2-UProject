#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleGearData.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpRatio;
    
    FDcxVehicleGearData();
};

