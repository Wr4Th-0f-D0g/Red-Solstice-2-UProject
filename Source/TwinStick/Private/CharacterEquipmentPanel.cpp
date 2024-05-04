#include "CharacterEquipmentPanel.h"

UCharacterEquipmentPanel::UCharacterEquipmentPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->PrimaryEquipmentGrid = NULL;
    this->SecondaryEquipmentGrid = NULL;
    this->EquipmentGridClass = NULL;
    this->EquipmentVB = NULL;
}





void UCharacterEquipmentPanel::SetPlayerState(AStrategyPlayerState* InPlayerState) {
}

void UCharacterEquipmentPanel::HandleEquipmentListRequested(EEquipementPanel InPanel) {
}

void UCharacterEquipmentPanel::HandleEquipmentChanged(const FCharacterEquipment& InEquipment, bool InAdded, EEquipementPanel InPanel) {
}

UEquipmentGrid* UCharacterEquipmentPanel::GetEquipmentGridFor(const FCharacterEquipment& InEquipment, EEquipementPanel InPanel) const {
    return NULL;
}



