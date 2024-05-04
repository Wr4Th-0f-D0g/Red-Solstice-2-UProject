#include "CharacterLoadoutPanel.h"

UCharacterLoadoutPanel::UCharacterLoadoutPanel() {
    this->ArmorSectionsUG = NULL;
    this->ArmorSectionClass = NULL;
    this->EquipmentPanelUpper = NULL;
    this->EquipmentPanelLower = NULL;
    this->ActiveSuitSection = ESuitSection::ESS_Invalid;
    this->bIsPrimaryLoadoutPanel = true;
    this->SkillsPanel = NULL;
    this->StratagemsArmorPanel = NULL;
    this->Hero = NULL;
    this->PlayerState = NULL;
}




void UCharacterLoadoutPanel::SetupArmorSectionGrid(const TArray<FSuitSectionData>& Sections, const TArray<FIntPoint> Positions) {
}

void UCharacterLoadoutPanel::SetPlayerState(AStrategyPlayerState* InPlayerState) {
}

void UCharacterLoadoutPanel::RequestWorkbenchView() {
}

void UCharacterLoadoutPanel::RegisterBackWidgetForTag(UWidget* NewWidget, FGameplayTag WidgetBackTag) {
}



void UCharacterLoadoutPanel::LoadPremadeForClass(ESolsticeHeroClass NewClass) {
}

void UCharacterLoadoutPanel::HandleModulesRequested(ESuitSection SuitSection) {
}

void UCharacterLoadoutPanel::HandleModuleChanged(const FModuleInfo& InModule, bool InAdded, ESuitSection InSection) {
}

bool UCharacterLoadoutPanel::HandleModuleActionRequested(const FModuleInfo& InModule, EEquipAction InAction) {
    return false;
}

bool UCharacterLoadoutPanel::HandleEquipmentActionRequested(const FCharacterEquipment& InEquipment, EEquipementPanel InPanel, EEquipAction InAction) {
    return false;
}

void UCharacterLoadoutPanel::HandleColorRequested(FLinearColor InColor, bool InPrimaryColor) {
}

FArmorspace UCharacterLoadoutPanel::GetAvailableSuitSpace() const {
    return FArmorspace{};
}

TMap<ESuitSection, int32> UCharacterLoadoutPanel::GetAvailableRoomMap() const {
    return TMap<ESuitSection, int32>();
}

int32 UCharacterLoadoutPanel::GetAvailableRoomForSection(ESuitSection InSection) const {
    return 0;
}

UArmorSectionPanel* UCharacterLoadoutPanel::GetArmorSection(ESuitSection InSection) const {
    return NULL;
}

UArmorSectionPanel* UCharacterLoadoutPanel::GetActiveArmorSection() const {
    return NULL;
}

void UCharacterLoadoutPanel::ConfigureArmorSections(const TArray<FSuitSectionData>& Sections) {
}


