#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleTireLoadFilterData.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleTireLoadFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNormalizedLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFilteredNormalizedLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNormalizedLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFilteredNormalizedLoad;
    
    FDcxVehicleTireLoadFilterData();
};

