#include "TechTreeData.h"

UTechTreeData::UTechTreeData() {
    this->TechDataTable = NULL;
    this->bClassIsInBeta = false;
    this->bSkirmishOnly = true;
    this->bCompressTechRows = true;
    this->bSortThisTree = true;
    this->DLCRequirementCode = 0;
}

TArray<FSolsticeTechData> UTechTreeData::GetTechTreeTechs() const {
    return TArray<FSolsticeTechData>();
}

TArray<FTechTreeDataRow> UTechTreeData::GetTechTreeElements() const {
    return TArray<FTechTreeDataRow>();
}

TArray<FSolsticeTechData> UTechTreeData::GetTechTierTechs(int32 TechTier) const {
    return TArray<FSolsticeTechData>();
}

int32 UTechTreeData::GetTechTierFor(const FGameplayTag& TechTag) const {
    return 0;
}

int32 UTechTreeData::GetTechTierCount() const {
    return 0;
}

TArray<FSolsticeTechData> UTechTreeData::GetTechsRequiring(const FGameplayTag& TechTag) const {
    return TArray<FSolsticeTechData>();
}

bool UTechTreeData::GetTechDataChecked(const FGameplayTag& TechTag, FSolsticeTechData& OutTechData) const {
    return false;
}

FSolsticeTechData UTechTreeData::GetTechData(const FGameplayTag& TechTag) const {
    return FSolsticeTechData{};
}

FGameplayTagContainer UTechTreeData::GetRequirementsFor(const FGameplayTag& TechTag) const {
    return FGameplayTagContainer{};
}

bool UTechTreeData::ClassTreeIsVisible() const {
    return false;
}


