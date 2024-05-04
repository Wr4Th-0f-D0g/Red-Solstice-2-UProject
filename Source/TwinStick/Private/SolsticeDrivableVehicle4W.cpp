#include "SolsticeDrivableVehicle4W.h"
#include "SolsticeVehicleMovementComponent4W.h"

ASolsticeDrivableVehicle4W::ASolsticeDrivableVehicle4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USolsticeVehicleMovementComponent4W>(TEXT("MovementComp"))) {
}

USolsticeVehicleMovementComponent4W* ASolsticeDrivableVehicle4W::GetVehicleDrive4W() const {
    return NULL;
}


