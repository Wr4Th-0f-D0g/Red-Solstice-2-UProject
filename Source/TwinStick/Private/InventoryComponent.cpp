#include "InventoryComponent.h"
#include "EmptyItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnvironmentSlot = NULL;
    this->InventorySlotCount = 0;
    this->EmptyItemClass = UEmptyItem::StaticClass();
}

void UInventoryComponent::TryAddItem(AInventoryPickup* Pickup, bool& bSuccess, UItem*& NewItem) {
}

void UInventoryComponent::SwapInventorySlots(int32 FirstSlotIndex, int32 SecondSlotIndex) {
}

void UInventoryComponent::SetInventory(TArray<UItem*> NewInventory) {
}

void UInventoryComponent::RemoveItemStack(int32 InSlot) {
}

void UInventoryComponent::RemoveAllItemStack() {
}

bool UInventoryComponent::IsInventoryFull() const {
    return false;
}

bool UInventoryComponent::HasItem(TSubclassOf<UItem> ItemClass) const {
    return false;
}

bool UInventoryComponent::HasAppropriateInventoryStack(TSubclassOf<UItem> InInventoryItemClass, TMap<int32, int32>& OutSlotSpaceMap) {
    return false;
}

void UInventoryComponent::HandleStackDepleted(UItem* DepletedStack) {
}

void UInventoryComponent::HandleAbilityFinished(UAbilityBase* InAbility, const FGameplayTag& InAbilityTag) {
}

int32 UInventoryComponent::GetItemKey(int32 Index) const {
    return 0;
}

int32 UInventoryComponent::GetInventorySlotCount() {
    return 0;
}

int32 UInventoryComponent::FindItemSlot(UItem* Item) {
    return 0;
}

int32 UInventoryComponent::FindItemClassSlot(TSubclassOf<UItem> InInventoryItemClass) {
    return 0;
}

UItem* UInventoryComponent::FindItem(TSubclassOf<UItem> InInventoryItemClass, bool bOnlyMissionItems) {
    return NULL;
}

void UInventoryComponent::DropItemStack_Implementation(int32 InSlot, bool bForce) {
}

void UInventoryComponent::DropItem_Implementation(int32 InSlot, bool bForce) {
}

void UInventoryComponent::DropAllItems_Implementation(bool bForce) {
}

bool UInventoryComponent::CanDropItems() const {
    return false;
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, InventoryContainer);
    DOREPLIFETIME(UInventoryComponent, EnvironmentSlot);
    DOREPLIFETIME(UInventoryComponent, InventorySlotCount);
}


