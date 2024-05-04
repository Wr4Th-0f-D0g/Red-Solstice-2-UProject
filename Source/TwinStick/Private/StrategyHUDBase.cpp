#include "StrategyHUDBase.h"
#include "CallToActionManager.h"

AStrategyHUDBase::AStrategyHUDBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->CallToActionManager = CreateDefaultSubobject<UCallToActionManager>(TEXT("CallToActionManager"));
    this->SelectedMapActorWidget = NULL;
    this->EventListWidget = NULL;
    this->MainLoadoutPanel = NULL;
    this->TooltipPreviewWeapon = NULL;
}











bool AStrategyHUDBase::ShouldShowInteractionCues() const {
    return false;
}

bool AStrategyHUDBase::ShouldDisplayNewItemNotifications_Implementation() const {
    return false;
}

void AStrategyHUDBase::SetTooltipPreviewWeapon(const FCharacterWeaponData& NewWeaponData) {
}

void AStrategyHUDBase::SetSelectedMapActor(AStrategyMapActor* MapActor) {
}


void AStrategyHUDBase::RemoveTooltipPreviewWeapon() {
}



void AStrategyHUDBase::RegisterTooltipParentForView(UPanelWidget* Parent, FGameplayTag ViewTag) {
}

void AStrategyHUDBase::RegisterMainLoadoutPanel(UCharacterLoadoutPanel* NewLoadoutPanel) {
}

void AStrategyHUDBase::RegisterChatWidgetParentForView(UPanelWidget* Parent, FGameplayTag ViewTag) {
}













bool AStrategyHUDBase::IsSelectedActorWidgetShown() const {
    return false;
}

bool AStrategyHUDBase::IsANewResearchUnlock(FGameplayTag InTag) const {
    return false;
}

bool AStrategyHUDBase::IsANewEngineeringItemUnlock(FGameplayTag InTag) const {
    return false;
}

bool AStrategyHUDBase::IsANewDocumentUnlock(FName InName) const {
    return false;
}

bool AStrategyHUDBase::IsANewBeastInfoUnlock(FName InName) const {
    return false;
}


void AStrategyHUDBase::HandleTravelStarted(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless) {
}

void AStrategyHUDBase::HandleMissionStatusChanged(const FStrategyMissionTimer& MissionStatus) {
}

void AStrategyHUDBase::HandleMapInitialized() {
}

void AStrategyHUDBase::HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState) {
}

void AStrategyHUDBase::HandleDropshipTargetChanged(AStrategyMapActor* OldTarget, AStrategyMapActor* NewTarget) {
}

void AStrategyHUDBase::HandleDropshipStatusChanged(EDropshipStatus DropshipStatus) {
}

void AStrategyHUDBase::HandleCallToActionShownChanged(UCallToActionBase* InWidget, bool InVisible) {
}



ESlateVisibility AStrategyHUDBase::GetTutorialBackButtonVisibility_Implementation(FGameplayTag TutorialTag) const {
    return ESlateVisibility::Visible;
}

ASolsticeWeaponBase* AStrategyHUDBase::GetTooltipPreviewWeapon() const {
    return NULL;
}

UCharacterLoadoutPanel* AStrategyHUDBase::GetMainLoadoutPanel() const {
    return NULL;
}

UPanelWidget* AStrategyHUDBase::GetDesiredTooltipParentForCurrentView() const {
    return NULL;
}

UPanelWidget* AStrategyHUDBase::GetDesiredChatParentForCurrentView() const {
    return NULL;
}



bool AStrategyHUDBase::CanViewDocumentsEntry(const FSolsticeTechDescription& DocumentDescription) const {
    return false;
}

void AStrategyHUDBase::Back() {
}

void AStrategyHUDBase::ApplyWeaponModsToPreviewWeapon(const FCharacterWeaponData& NewWeaponData) {
}


