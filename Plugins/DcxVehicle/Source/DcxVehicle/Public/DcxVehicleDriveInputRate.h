#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDriveInputRate.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleDriveInputRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallRate;
    
    FDcxVehicleDriveInputRate();
};

