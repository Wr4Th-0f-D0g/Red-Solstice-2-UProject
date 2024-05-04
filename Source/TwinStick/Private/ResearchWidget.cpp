#include "ResearchWidget.h"

UResearchWidget::UResearchWidget() {
    this->AvailableResearchVB = NULL;
    this->CompletedResearchVB = NULL;
}

void UResearchWidget::HandleResearchStarted(UTechObject* InTech) {
}

void UResearchWidget::HandleResearchCompleted(UTechObject* InTech) {
}

UTechButton* UResearchWidget::GetWidgetForTech(const FSolsticeTechData& InTechData) const {
    return NULL;
}

UCampaign* UResearchWidget::GetCampaignObject() const {
    return NULL;
}

TArray<UTechTreeData*> UResearchWidget::GetAllTechTrees() const {
    return TArray<UTechTreeData*>();
}

TArray<FSolsticeTechData> UResearchWidget::GetAllTechsMatching(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UResearchWidget::GetAllTechs() const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UResearchWidget::GetAllResearchedTagsMatching(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UResearchWidget::GetAllAvailableTechsMatching(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

void UResearchWidget::ApplyFilter(const FGameplayTag& InTag, bool InVisible) {
}


