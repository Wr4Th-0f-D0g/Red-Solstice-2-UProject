#include "SolsticeDrivableVehicleNW.h"
#include "SolsticeVehicleMovementComponentNW.h"

ASolsticeDrivableVehicleNW::ASolsticeDrivableVehicleNW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USolsticeVehicleMovementComponentNW>(TEXT("MovementComp"))) {
}

USolsticeVehicleMovementComponentNW* ASolsticeDrivableVehicleNW::GetVehicleDriveNW() const {
    return NULL;
}


