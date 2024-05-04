#pragma once
#include "CoreMinimal.h"
#include "VehicleGearDataTank.generated.h"

USTRUCT(BlueprintType)
struct FVehicleGearDataTank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpRatio;
    
    TWINSTICK_API FVehicleGearDataTank();
};

