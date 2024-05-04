#include "VehicleModListGroupBase.h"

UVehicleModListGroupBase::UVehicleModListGroupBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ModButtonClass = NULL;
    this->ListBox = NULL;
    this->ModuleCategory = ESolsticeVehicleModuleCategory::Drive;
}


