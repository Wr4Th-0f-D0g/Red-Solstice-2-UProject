#include "StrategyResearchManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UStrategyResearchManager::UStrategyResearchManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoResearchNotificationWidgetClass = NULL;
    this->NoResearchNotificationWidget = NULL;
    this->ResearchInProgressWidgetClass = NULL;
    this->ResearchInProgressWidget = NULL;
    this->bResearchPaused = false;
    this->WeaponTable = NULL;
    this->ModulesTable = NULL;
    this->ItemsDataAsset = NULL;
    this->TechDescriptionsTable = NULL;
}

bool UStrategyResearchManager::TechHasMultiplePrerequisites(FGameplayTag TechTag) const {
    return false;
}

void UStrategyResearchManager::ShowResearchInProgressWidget() {
}

void UStrategyResearchManager::ShowNoResearchNotification() {
}

void UStrategyResearchManager::Research(UTechObject* Tech) {
}

void UStrategyResearchManager::RemoveResearchInProgressWidget() {
}

void UStrategyResearchManager::RemoveNoResearchNotification() {
}

void UStrategyResearchManager::PauseResearch(UTechObject* Tech) {
}

void UStrategyResearchManager::OnRep_ResearchedTechs() {
}

void UStrategyResearchManager::OnRep_CurrentResearch() {
}

void UStrategyResearchManager::OnRep_AvailableTechs() {
}

void UStrategyResearchManager::MulticastShowTechResearchedCTA_Implementation(FGameplayTag TechTag) {
}

bool UStrategyResearchManager::MeetsPrerequisites(const UTechObject* InTech) const {
    return false;
}

bool UStrategyResearchManager::IsResearchCompletedByTech(UTechObject* InTech) const {
    return false;
}

bool UStrategyResearchManager::IsResearchCompletedByTag(FGameplayTag InTag) const {
    return false;
}

bool UStrategyResearchManager::HasSuppliesToStartResearch(const UTechObject* Tech) const {
    return false;
}

bool UStrategyResearchManager::HasStartedResearchFor(UTechObject* InTech) const {
    return false;
}

bool UStrategyResearchManager::HasSpecialistsToStartResearch(const UTechObject* Tech) const {
    return false;
}

bool UStrategyResearchManager::HasFacilitiesToStartResearch(const UTechObject* Tech) const {
    return false;
}

void UStrategyResearchManager::HandleResearchFinished() {
}

void UStrategyResearchManager::HandleCampaignProgressTagAdded(const FGameplayTag& InTag) {
}

TArray<FName> UStrategyResearchManager::GetWeaponNamesUnlockedByResearch(FGameplayTag TechTag) const {
    return TArray<FName>();
}

FGameplayTagContainer UStrategyResearchManager::GetTechUnlockedByResearch(FGameplayTag TechTag) const {
    return FGameplayTagContainer{};
}

FSolsticeTechData UStrategyResearchManager::GetTechDataFor(const FGameplayTag& InTag) const {
    return FSolsticeTechData{};
}

int32 UStrategyResearchManager::GetSupplyCostFor(const FGameplayTag& InTag) const {
    return 0;
}

TArray<FName> UStrategyResearchManager::GetSuitModulesUnlockedByResearch(FGameplayTag TechTag) const {
    return TArray<FName>();
}

TArray<FSolsticeAttributeModifier> UStrategyResearchManager::GetStackableModifiersFromResearch(FGameplayTag ResearchTag) const {
    return TArray<FSolsticeAttributeModifier>();
}

int32 UStrategyResearchManager::GetScientistCount() const {
    return 0;
}

void UStrategyResearchManager::GetResourcesGrantedByResearch(FGameplayTag TechTag, int32& OutSupplies, int32& OutDeployment, int32& OutSpecialists) const {
}

FMarsTime UStrategyResearchManager::GetResearchTimeRemainingFor(UTechObject* InTech) const {
    return FMarsTime{};
}

EResearchSpeed UStrategyResearchManager::GetResearchSpeedForTechAbstracted(int32 SpecialistCost) const {
    return EResearchSpeed::VerySlow;
}

float UStrategyResearchManager::GetResearchSpeedForTech(int32 SpecialistCost) const {
    return 0.0f;
}

EResearchSpeed UStrategyResearchManager::GetResearchSpeedAbstracted() const {
    return EResearchSpeed::VerySlow;
}

float UStrategyResearchManager::GetResearchSpeed() const {
    return 0.0f;
}

float UStrategyResearchManager::GetResearchPercentFor(UTechObject* InTech) const {
    return 0.0f;
}

FMarsTime UStrategyResearchManager::GetRemainingResearchTime() const {
    return FMarsTime{};
}

int32 UStrategyResearchManager::GetMobileLabLevel() const {
    return 0;
}

FGameplayTagContainer UStrategyResearchManager::GetEngineeringItemsUnlockedByResearch(FGameplayTag TechTag) const {
    return FGameplayTagContainer{};
}

FActiveResearch UStrategyResearchManager::GetCurrentResearch() const {
    return FActiveResearch{};
}

UTechObject* UStrategyResearchManager::GetCurrentlyResearchedTech() const {
    return NULL;
}

TArray<TSubclassOf<USolsticeBuffBase>> UStrategyResearchManager::GetCombatBuffsFromResearch(FGameplayTag ResearchTag) const {
    return TArray<TSubclassOf<USolsticeBuffBase>>();
}

TArray<FName> UStrategyResearchManager::GetClassSuitsUnlockedByResearch(FGameplayTag TechTag) const {
    return TArray<FName>();
}

UCampaign* UStrategyResearchManager::GetCampaignObject() const {
    return NULL;
}

TArray<UTechTreeData*> UStrategyResearchManager::GetAllTechTrees() const {
    return TArray<UTechTreeData*>();
}

TArray<FSolsticeTechData> UStrategyResearchManager::GetAllTechsMatching(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UStrategyResearchManager::GetAllTechs() const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UStrategyResearchManager::GetAllTechRequiring(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UStrategyResearchManager::GetAllResearchedTagsMatching(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

TArray<FSolsticeTechData> UStrategyResearchManager::GetAllAvailableTechsMatching(const FGameplayTag& InTag) const {
    return TArray<FSolsticeTechData>();
}

void UStrategyResearchManager::FinishResearch(UTechObject* Tech) {
}

bool UStrategyResearchManager::CanStartResearch(const UTechObject* Tech) const {
    return false;
}

void UStrategyResearchManager::AddResearch(FGameplayTag TechTag, bool bSkipBroadcast) {
}

void UStrategyResearchManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStrategyResearchManager, ResearchedTechs);
    DOREPLIFETIME(UStrategyResearchManager, AvailableTechs);
    DOREPLIFETIME(UStrategyResearchManager, CurrentResearch);
    DOREPLIFETIME(UStrategyResearchManager, ActiveResearchList);
}


