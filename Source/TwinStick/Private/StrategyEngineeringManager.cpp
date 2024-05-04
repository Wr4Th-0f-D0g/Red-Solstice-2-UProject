#include "StrategyEngineeringManager.h"
#include "Net/UnrealNetwork.h"

UStrategyEngineeringManager::UStrategyEngineeringManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EngineeringObjectClass = NULL;
    this->bProductionPaused = false;
}

void UStrategyEngineeringManager::StartProduction(const FGameplayTag& InItemTag) {
}

void UStrategyEngineeringManager::ResumeProduction(UEngineeringObject* EngineeringObject, bool bFromInput) {
}

void UStrategyEngineeringManager::RemoveItemFromInventory(FGameplayTag InItemTag, int32 InAmount) {
}

void UStrategyEngineeringManager::PauseProduction(UEngineeringObject* EngineeringObject, bool bFromInput) {
}

void UStrategyEngineeringManager::PauseAllEngineeringProjects() {
}

void UStrategyEngineeringManager::OnRep_Inventory(TArray<FStrategyInventoryItem>& OldItems) {
}

void UStrategyEngineeringManager::OnRep_ActiveEngineeringObjects(TArray<UEngineeringObject*> OldArray) {
}

bool UStrategyEngineeringManager::MeetsRequirementsFor(const FGameplayTag& InItemTag) const {
    return false;
}

bool UStrategyEngineeringManager::HasSpecialistToBuild(const FGameplayTag& InItemTag) const {
    return false;
}

bool UStrategyEngineeringManager::HasSpaceForItem(const FGameplayTag& InItemTag) const {
    return false;
}

bool UStrategyEngineeringManager::HasResourcesToProduce(const FGameplayTag& InItemTag) const {
    return false;
}

bool UStrategyEngineeringManager::HasPrototypedItem(const FGameplayTag& InItemTag) const {
    return false;
}

bool UStrategyEngineeringManager::HasActiveProductionFor(const FGameplayTag& InItemTag) const {
    return false;
}

int32 UStrategyEngineeringManager::GetSupplyCostFor(const FGameplayTag& InItemTag) const {
    return 0;
}

EProductionStatus UStrategyEngineeringManager::GetProductionStatusForObject(const UEngineeringObject* EngineeringObject) {
    return EProductionStatus::Invalid;
}

float UStrategyEngineeringManager::GetProductionSpeed() const {
    return 0.0f;
}

int32 UStrategyEngineeringManager::GetNumberOfEngineers() const {
    return 0;
}

FStrategyInventoryItemData UStrategyEngineeringManager::GetItemDataFor(const FGameplayTag& InItemTag) const {
    return FStrategyInventoryItemData{};
}

int32 UStrategyEngineeringManager::GetInventoryAmountFor(const FGameplayTag& InItemTag) const {
    return 0;
}

UEngineeringData* UStrategyEngineeringManager::GetEngineeringData() const {
    return NULL;
}

int32 UStrategyEngineeringManager::GetEngineerCount() const {
    return 0;
}

TArray<FStrategyInventoryItemData> UStrategyEngineeringManager::GetAllEngineeringItems() const {
    return TArray<FStrategyInventoryItemData>();
}

TArray<FActiveProduction> UStrategyEngineeringManager::GetActiveProductionsFor(const FGameplayTag& InItemTag) const {
    return TArray<FActiveProduction>();
}

TArray<FActiveProduction> UStrategyEngineeringManager::GetActiveProductions() const {
    return TArray<FActiveProduction>();
}

int32 UStrategyEngineeringManager::GetActiveProductionCountFor(const FGameplayTag& InItemTag) const {
    return 0;
}

TArray<UEngineeringObject*> UStrategyEngineeringManager::GetActiveEngineeringObjectsFor(const FGameplayTag& InItemTag) {
    return TArray<UEngineeringObject*>();
}

bool UStrategyEngineeringManager::CanStartProductionFor(const FGameplayTag& InItemTag) {
    return false;
}

bool UStrategyEngineeringManager::CanResumeProduction(const UEngineeringObject* EngineeringObject) {
    return false;
}

void UStrategyEngineeringManager::AddItemToInventory(FGameplayTag InItemTag, int32 InAmount) {
}

void UStrategyEngineeringManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStrategyEngineeringManager, Inventory);
    DOREPLIFETIME(UStrategyEngineeringManager, ActiveEngineeringObjects);
}


