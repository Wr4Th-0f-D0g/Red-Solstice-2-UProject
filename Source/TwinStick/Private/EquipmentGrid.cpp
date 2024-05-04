#include "EquipmentGrid.h"

UEquipmentGrid::UEquipmentGrid() : UUserWidget(FObjectInitializer::Get()) {
    this->EquipmentGrid = NULL;
    this->EquipmentButtonClass = NULL;
    this->AvailableSlots = 3;
    this->PanelType = EEquipementPanel::EEP_Invalid;
    this->EquipmentWidgetClass = NULL;
    this->WeaponWidgetClass = NULL;
    this->EquippedWeaponWidget = NULL;
    this->EquipmentGridLabel = NULL;
}


void UEquipmentGrid::SetupGridButtons(int32 Slots) {
}


void UEquipmentGrid::RequestEquipmentList() {
}

bool UEquipmentGrid::IsLocalPlayerWidget() const {
    return false;
}


void UEquipmentGrid::HandleEquipmentPreviewChanged(const FCharacterEquipment& PreviewEquipment, bool IsHovered, bool IsDragged) {
}



int32 UEquipmentGrid::GetEquippedWeaponSize() const {
    return 0;
}

FCharacterEquipment UEquipmentGrid::GetEquippedWeapon() const {
    return FCharacterEquipment{};
}

int32 UEquipmentGrid::GetEquippedItemSize() const {
    return 0;
}

EEquipementPanel UEquipmentGrid::GetEquipmentType() const {
    return EEquipementPanel::EEP_Invalid;
}

int32 UEquipmentGrid::GetEquipmentGridSize() const {
    return 0;
}

int32 UEquipmentGrid::GetAvailableWeaponSize() const {
    return 0;
}

int32 UEquipmentGrid::GetAvailableSize() const {
    return 0;
}


