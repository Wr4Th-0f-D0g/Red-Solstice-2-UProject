#pragma once
#include "CoreMinimal.h"
#include "DcxVehicle.h"
#include "DcxVehicleNoDrive.generated.h"

class UDcxVehicleNoDriveComponent;

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API ADcxVehicleNoDrive : public ADcxVehicle {
    GENERATED_BODY()
public:
    ADcxVehicleNoDrive(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleNoDriveComponent* GetVehicleNoDrive() const;
    
};

