#include "EquipmentPayload.h"

UEquipmentPayload::UEquipmentPayload() {
    this->position = 0;
}

int32 UEquipmentPayload::GetSize() const {
    return 0;
}

int32 UEquipmentPayload::GetPosition() const {
    return 0;
}

UTexture2D* UEquipmentPayload::GetEquipmentIcon() const {
    return NULL;
}


