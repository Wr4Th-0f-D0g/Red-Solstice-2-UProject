#include "ArmorSectionPanel.h"

UArmorSectionPanel::UArmorSectionPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->EquippedModuleGrid = NULL;
    this->ArmorSectionIcon = NULL;
    this->EquippedModuleInfoClass = NULL;
    this->bIsActive = false;
    this->bLocalArmorSection = true;
}



void UArmorSectionPanel::RequestModuleList() {
}

bool UArmorSectionPanel::PanelHasModuleByName(FName ModuleName) const {
    return false;
}



void UArmorSectionPanel::HandlePreviewModuleChanged(const FModuleInfo& Module, bool IsHovered, bool IsDragged) {
}

void UArmorSectionPanel::HandleEquippedModulesChanged(AStrategyPlayerState* PS, UModuleEquipStatus* MES) {
}

int32 UArmorSectionPanel::GetSectionSize() const {
    return 0;
}

ESuitSection UArmorSectionPanel::GetSection() const {
    return ESuitSection::ESS_Invalid;
}

int32 UArmorSectionPanel::GetAvailableSize() const {
    return 0;
}


bool UArmorSectionPanel::CanFitModule(const FModuleInfo& NewModule) {
    return false;
}



