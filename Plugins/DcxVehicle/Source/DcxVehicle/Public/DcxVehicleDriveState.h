#pragma once
#include "CoreMinimal.h"
#include "DcxAnalogControlArray.h"
#include "DcxGear.h"
#include "DcxVehicleDriveState.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleDriveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDcxAnalogControlArray AnalogControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDcxGear CurrentGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDcxGear TargetGear;
    
    FDcxVehicleDriveState();
};

