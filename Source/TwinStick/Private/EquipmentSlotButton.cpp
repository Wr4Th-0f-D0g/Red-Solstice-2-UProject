#include "EquipmentSlotButton.h"

UEquipmentSlotButton::UEquipmentSlotButton() : UUserWidget(FObjectInitializer::Get()) {
    this->Index = 0;
    this->PanelType = EEquipementPanel::EEP_Invalid;
    this->EquipmentPanel = NULL;
}


