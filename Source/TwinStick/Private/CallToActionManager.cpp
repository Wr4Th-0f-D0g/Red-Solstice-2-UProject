#include "CallToActionManager.h"
#include "Templates/SubclassOf.h"

UCallToActionManager::UCallToActionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutpostDestroyedCTAClass = NULL;
    this->ColonyDestroyedCTAClass = NULL;
    this->TerraformerDestroyedCTAClass = NULL;
    this->ActiveCallToActionWidget = NULL;
    this->ChapterWidgetClass = NULL;
    this->ChapterWidgetClassBaseAttack = NULL;
    this->MissionWidgetClass = NULL;
    this->FinalizeMissionWidgetClass = NULL;
    this->ResearchCompletedWidgetClass = NULL;
    this->ResearchReportWidgetClass = NULL;
    this->NewTechWidgetClass = NULL;
    this->NewWeaponWidgetClass = NULL;
    this->NewModuleWidgetClass = NULL;
    this->NewItemWidgetClass = NULL;
    this->NewPowerSuitWidgetClass = NULL;
    this->OutpostConstructionCompletedWidgetClass = NULL;
    this->OneMonthLaterWidgetClass = NULL;
    this->ExecutorOrdersWidgetClass = NULL;
    this->WeaponTable = NULL;
    this->ModulesTable = NULL;
    this->ItemsDataAsset = NULL;
    this->TechDescriptionTable = NULL;
}

void UCallToActionManager::QueueTerraformerDestroyed(ARegion* InRegion, bool bDestroyedBySolar) {
}

void UCallToActionManager::QueueTechCompleted(const FGameplayTag& InTag) {
}

void UCallToActionManager::QueueStrategyMissionSpawned(AStrategyMission* InMission) {
}

void UCallToActionManager::QueueStrategyMissionCompleted(AStrategyMission* InMission) {
}

void UCallToActionManager::QueueOutpostDestroyed(ARegion* InRegion, bool bDestroyedBySolar) {
}

void UCallToActionManager::QueueOutpostConstructionCompleted(AOutpost* Outpost) {
}

void UCallToActionManager::QueueOneMonthLater() {
}

void UCallToActionManager::QueueColonyDestroyed(ARegion* InRegion, bool bDestroyedBySolar) {
}

void UCallToActionManager::QueueChapterStarted(const FGameplayTag& InTag) {
}

void UCallToActionManager::QueueCallToActionByTag(FGameplayTag InTag, FGameplayTag InViewTag, TSubclassOf<UCallToActionBase> InWidgetClass, UObject* InContextObject, bool bCheckForUnlocks) {
}

void UCallToActionManager::QueueCallToActionByName(FName InName, FGameplayTag InViewTag, TSubclassOf<UCallToActionBase> InWidgetClass, UObject* InContextObject) {
}

void UCallToActionManager::IgnoreCurrentCallToAction() {
}

void UCallToActionManager::HandleStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView) {
}

void UCallToActionManager::HandleDropshipStatusChanged(EDropshipStatus DropshipStatus) {
}

void UCallToActionManager::HandleCallToActionIgnored(UCallToActionBase* CallToActionWidget) {
}

void UCallToActionManager::HandleCallToActionConfirmed(UCallToActionBase* CallToActionWidget) {
}

TArray<FName> UCallToActionManager::GetUnlockedWeaponNames(const FGameplayTag& InTag) const {
    return TArray<FName>();
}

FGameplayTagContainer UCallToActionManager::GetUnlockedTechTags(const FGameplayTag& InTag) const {
    return FGameplayTagContainer{};
}

TArray<FName> UCallToActionManager::GetUnlockedModuleNames(const FGameplayTag& InTag) const {
    return TArray<FName>();
}

FGameplayTagContainer UCallToActionManager::GetUnlockedItemTags(const FGameplayTag& InTag) const {
    return FGameplayTagContainer{};
}

TArray<FName> UCallToActionManager::GetUnlockedClassNames(const FGameplayTag& InTag) const {
    return TArray<FName>();
}

void UCallToActionManager::AcceptCurrentCallToAction() {
}


