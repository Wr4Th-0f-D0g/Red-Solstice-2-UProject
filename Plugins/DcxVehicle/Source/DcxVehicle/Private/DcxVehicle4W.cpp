#include "DcxVehicle4W.h"
#include "DcxVehicleDriveComponent4W.h"

ADcxVehicle4W::ADcxVehicle4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleWheels = CreateDefaultSubobject<UDcxVehicleDriveComponent4W>(TEXT("VehicleDriveComponent4W"));
}

UDcxVehicleDriveComponent4W* ADcxVehicle4W::GetVehicleDrive4W() const {
    return NULL;
}


