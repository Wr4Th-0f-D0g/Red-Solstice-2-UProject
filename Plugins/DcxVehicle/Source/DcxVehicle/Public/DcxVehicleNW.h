#pragma once
#include "CoreMinimal.h"
#include "DcxVehicle.h"
#include "DcxVehicleNW.generated.h"

class UDcxVehicleDriveComponentNW;

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API ADcxVehicleNW : public ADcxVehicle {
    GENERATED_BODY()
public:
    ADcxVehicleNW(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleDriveComponentNW* GetVehicleDriveNW() const;
    
};

