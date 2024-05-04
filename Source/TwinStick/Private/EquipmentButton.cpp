#include "EquipmentButton.h"

UEquipmentButton::UEquipmentButton() : UUserWidget(FObjectInitializer::Get()) {
    this->EquipmentIcon = NULL;
    this->Payload = NULL;
}


void UEquipmentButton::RemoveModuleFromParent() {
}

bool UEquipmentButton::IsSecondaryWeapon() const {
    return false;
}

bool UEquipmentButton::IsPrimaryWeapon() const {
    return false;
}

bool UEquipmentButton::IsItem() const {
    return false;
}

void UEquipmentButton::HandleEquippedModulesChanged(AStrategyPlayerState* PS, const UModuleEquipStatus* MES) {
}

EEquipementPanel UEquipmentButton::GetEquipmentType() const {
    return EEquipementPanel::EEP_Invalid;
}


void UEquipmentButton::BroadcastPreviewChanged(const FCharacterEquipment& PreviewEquipment, bool IsHovered, bool IsDragged) {
}


