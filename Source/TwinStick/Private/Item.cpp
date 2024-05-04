#include "Item.h"
#include "Net/UnrealNetwork.h"

UItem::UItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotIndex = 0;
    this->bSlotUnlocked = true;
    this->ItemType = EInventoryItemType::IIT_None;
    this->bCanSplitStack = true;
    this->StackSize = 0;
    this->MaximumStackSize = 0;
    this->DroppedActorType = NULL;
    this->PassiveBuffType = NULL;
    this->bUseDisallowed = false;
    this->OutOfStackSound = NULL;
}

void UItem::SetUseDisallowed(bool bNewDisallowed) {
}

void UItem::SetStackSize(int32 Value) {
}

void UItem::OnRep_StackSize(int32 PreviousStackSize) {
}



int32 UItem::GetStackSize() const {
    return 0;
}

bool UItem::GetIsEmpty() {
    return false;
}

void UItem::ClientConfirmItemDropped_Implementation(int32 RemainingStackSize) {
}

void UItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItem, bSlotUnlocked);
    DOREPLIFETIME(UItem, StackSize);
    DOREPLIFETIME(UItem, MaximumStackSize);
    DOREPLIFETIME(UItem, bUseDisallowed);
}


