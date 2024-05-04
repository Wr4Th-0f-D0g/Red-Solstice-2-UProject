#include "DcxVehicleNW.h"
#include "DcxVehicleDriveComponentNW.h"

ADcxVehicleNW::ADcxVehicleNW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleWheels = CreateDefaultSubobject<UDcxVehicleDriveComponentNW>(TEXT("VehicleDriveComponentNW"));
}

UDcxVehicleDriveComponentNW* ADcxVehicleNW::GetVehicleDriveNW() const {
    return NULL;
}


