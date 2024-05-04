#include "DcxVehicleNoDrive.h"
#include "DcxVehicleNoDriveComponent.h"

ADcxVehicleNoDrive::ADcxVehicleNoDrive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleWheels = CreateDefaultSubobject<UDcxVehicleNoDriveComponent>(TEXT("VehicleNoDriveComponent"));
}

UDcxVehicleNoDriveComponent* ADcxVehicleNoDrive::GetVehicleNoDrive() const {
    return NULL;
}


