#include "ProfileSkillTreeBase.h"

UProfileSkillTreeBase::UProfileSkillTreeBase() {
    this->PlayerDataAsset = NULL;
}

bool UProfileSkillTreeBase::TreeIsSkirmishOnlyByTag(FGameplayTag TreeTag) const {
    return false;
}

TArray<UTechTreeData*> UProfileSkillTreeBase::GetSortedTechTreesForDisplay() const {
    return TArray<UTechTreeData*>();
}

TArray<FString> UProfileSkillTreeBase::GetDropdownListEntries() const {
    return TArray<FString>();
}


