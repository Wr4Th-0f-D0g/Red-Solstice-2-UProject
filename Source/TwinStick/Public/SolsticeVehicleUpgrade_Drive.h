#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleClutchData.h"
#include "DcxVehicleDriveInputRate.h"
#include "DcxVehicleEngineData.h"
#include "DcxVehicleGearboxData.h"
#include "Engine/DataTable.h"
#include "SolsticeVehicleUpgrade_Drive.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeVehicleUpgrade_Drive : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleEngineData EngineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleGearboxData GearboxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleClutchData ClutchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate ThrottleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate BrakeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate HandbrakeRate;
    
    TWINSTICK_API FSolsticeVehicleUpgrade_Drive();
};

