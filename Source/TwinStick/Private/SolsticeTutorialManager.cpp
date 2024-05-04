#include "SolsticeTutorialManager.h"

USolsticeTutorialManager::USolsticeTutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialPopupData = NULL;
    this->TutorialDisplayRequirements = NULL;
    this->PopupWidgetClass = NULL;
    this->CurrentTutorialPopup = NULL;
}

void USolsticeTutorialManager::UpdateTutorialDisplays() {
}

void USolsticeTutorialManager::StartTutorialForView(FGameplayTag ViewTag) {
}

void USolsticeTutorialManager::StartSpecificTutorialChain(FGameplayTag ChainStarter) {
}


void USolsticeTutorialManager::RegisterWidgetForTutorialTag(FGameplayTag TutorialTag, UWidget* Widget) {
}

void USolsticeTutorialManager::OnStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& OldView) {
}

bool USolsticeTutorialManager::HasPreviousTutorial(const FGameplayTag& TutorialTag) {
    return false;
}

void USolsticeTutorialManager::GoBackOneSegment(const FGameplayTag& PopupTag) {
}

FGameplayTag USolsticeTutorialManager::GetPreviousTutorialTag(const FGameplayTag& TutorialTag) {
    return FGameplayTag{};
}

void USolsticeTutorialManager::DisableAllPopupTutorials() {
}

void USolsticeTutorialManager::CompleteTutorialSegment(const FGameplayTag& PopupTag, bool TryToFinalize) {
}


