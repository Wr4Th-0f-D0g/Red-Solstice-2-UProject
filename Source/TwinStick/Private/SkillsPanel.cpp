#include "SkillsPanel.h"
#include "Templates/SubclassOf.h"

USkillsPanel::USkillsPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->MainSkillsGrid = NULL;
    this->UtilitySkillsGrid = NULL;
    this->SkillButtonClass = NULL;
    this->MainSkillWidgetClass = NULL;
    this->UtilitySkillWidgetClass = NULL;
}



void USkillsPanel::SetContext(UHeroSkillsComponent* NewContext) {
}

void USkillsPanel::HandleSkillsSwapped(ESkillSlot SkillType, int32 FirstIndex, int32 SecondIndex) {
}

void USkillsPanel::HandleSkillChanged(USkill* InSkill, ESkillSlot InSlot, int32 InIndex) {
}

bool USkillsPanel::CanAddSkill(TSubclassOf<USkill> InSkill) const {
    return false;
}


