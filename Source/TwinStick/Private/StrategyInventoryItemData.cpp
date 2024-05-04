#include "StrategyInventoryItemData.h"

FStrategyInventoryItemData::FStrategyInventoryItemData() {
    this->RequisitionCost = 0;
    this->Slots = 0;
    this->bStartPrototyped = false;
    this->bConsumesSpecialists = false;
    this->GrantedItemStackSize = 0;
    this->GrantedBuffStacks = 0;
    this->GrantedMissionWaveProgress = 0.00f;
    this->PrototypeRequiredSpecialists = 0;
    this->PrototypeSupplyCost = 0;
    this->PrototypeBuildTimeHours = 0;
    this->RequiredSpecialists = 0;
    this->SupplyCost = 0;
    this->BuildTimeHours = 0;
    this->bShouldDisplayInInventory = false;
    this->bNotBuildable = false;
    this->MaxItemCount = 0;
    this->bForceHiddenInEngineering = false;
    this->bUselessInside = false;
    this->bAllowOnlyOnePerSquad = false;
    this->RequisitionBonus = 0.00f;
}

