#include "DcxVehicleTank.h"
#include "DcxVehicleDriveComponentTank.h"

ADcxVehicleTank::ADcxVehicleTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleWheels = CreateDefaultSubobject<UDcxVehicleDriveComponentTank>(TEXT("VehicleDriveComponentTank"));
}

UDcxVehicleDriveComponentTank* ADcxVehicleTank::GetVehicleDriveTank() const {
    return NULL;
}


