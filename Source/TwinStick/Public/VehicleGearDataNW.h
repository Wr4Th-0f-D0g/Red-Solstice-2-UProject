#pragma once
#include "CoreMinimal.h"
#include "VehicleGearDataNW.generated.h"

USTRUCT(BlueprintType)
struct FVehicleGearDataNW {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpRatio;
    
    TWINSTICK_API FVehicleGearDataNW();
};

