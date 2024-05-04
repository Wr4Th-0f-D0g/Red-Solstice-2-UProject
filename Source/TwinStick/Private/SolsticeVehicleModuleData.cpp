#include "SolsticeVehicleModuleData.h"

FSolsticeVehicleModuleData::FSolsticeVehicleModuleData() {
    this->ModuleCategory = ESolsticeVehicleModuleCategory::Drive;
    this->ModuleSlot = ESolsticeVehicleModuleTarget::Invalid;
    this->AllowedVehicles = 0;
    this->SkirmishRankUnlock = 0;
}

