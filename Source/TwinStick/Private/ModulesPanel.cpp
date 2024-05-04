#include "ModulesPanel.h"

UModulesPanel::UModulesPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->ModulesDT = NULL;
    this->ModuleType = ESuitModuleType::Invalid;
    this->MarineClass = ESolsticeHeroClass::ESHC_Invalid;
    this->MarineCharType = ECharacterType::ECT_Hero;
}

bool UModulesPanel::IsBot() const {
    return false;
}

TArray<FModuleInfo> UModulesPanel::GetModulesForSection(ESuitSection Section) const {
    return TArray<FModuleInfo>();
}

TArray<FModuleInfo> UModulesPanel::GetClassModulesOfType(ESuitModuleType InModuleType) const {
    return TArray<FModuleInfo>();
}

TArray<FModuleInfo> UModulesPanel::GetAllModulesForClass() const {
    return TArray<FModuleInfo>();
}


