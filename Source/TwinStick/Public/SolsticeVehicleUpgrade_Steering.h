#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDriveInputRate.h"
#include "Curves/CurveFloat.h"
#include "Engine/DataTable.h"
#include "SolsticeVehicleUpgrade_Steering.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeVehicleUpgrade_Steering : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteerCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate SteerRate;
    
    TWINSTICK_API FSolsticeVehicleUpgrade_Steering();
};

