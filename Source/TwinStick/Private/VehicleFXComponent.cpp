#include "VehicleFXComponent.h"

UVehicleFXComponent::UVehicleFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EngineRPMParam = TEXT("RPM");
    this->EngineSound = NULL;
    this->TimeBeforeCuttingEngineSounds = 10.00f;
    this->EngineSoundComp = NULL;
}






ASolsticeDrivableVehicle* UVehicleFXComponent::GetOwningVehicle() const {
    return NULL;
}




