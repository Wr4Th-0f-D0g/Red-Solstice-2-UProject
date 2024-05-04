#include "ModuleInfo.h"

FModuleInfo::FModuleInfo() {
    this->AllowedClasses = 0;
    this->AllowedSlots = 0;
    this->AllowedCharacterTypes = 0;
    this->Size = 0;
    this->PowerProvided = 0.00f;
    this->PowerRequirement = 0.00f;
    this->bIsBotExclusiveModule = false;
    this->bUniqueEquip = false;
    this->ModuleType = ESuitModuleType::Invalid;
    this->ModuleSkillSlot = ESkillSlot::Invalid;
    this->PackageID = 0;
    this->CachedIdentifier = 0;
}

