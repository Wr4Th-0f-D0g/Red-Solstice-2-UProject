#include "ItemDefinitions.h"

FItemDefinitions::FItemDefinitions() {
    this->StaticMesh = NULL;
    this->MedianStackSize = 0;
    this->MaximumStackSize = 0;
    this->bRandomStackSize = false;
    this->InventoryItemClass = NULL;
    this->PickupActionClass = NULL;
}

