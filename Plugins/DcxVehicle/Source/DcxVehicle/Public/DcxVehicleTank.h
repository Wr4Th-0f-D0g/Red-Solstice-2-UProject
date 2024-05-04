#pragma once
#include "CoreMinimal.h"
#include "DcxVehicle.h"
#include "DcxVehicleTank.generated.h"

class UDcxVehicleDriveComponentTank;

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API ADcxVehicleTank : public ADcxVehicle {
    GENERATED_BODY()
public:
    ADcxVehicleTank(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleDriveComponentTank* GetVehicleDriveTank() const;
    
};

