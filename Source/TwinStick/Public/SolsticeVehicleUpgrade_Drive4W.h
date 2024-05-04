#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDifferentialData4W.h"
#include "SolsticeVehicleUpgrade_Drive.h"
#include "SolsticeVehicleUpgrade_Drive4W.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeVehicleUpgrade_Drive4W : public FSolsticeVehicleUpgrade_Drive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDifferentialData4W DifferentialData;
    
    TWINSTICK_API FSolsticeVehicleUpgrade_Drive4W();
};

