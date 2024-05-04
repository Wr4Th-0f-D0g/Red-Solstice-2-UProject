#include "InventoryItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UInventoryItem::UInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = EInventoryItemType::IIT_None;
    this->Cooldown = 0.00f;
    this->MaximumStackSize = 0;
    this->MinimumStackForUse = 1;
    this->ConsumeOnUse = true;
    this->Icon = NULL;
    this->DroppedActorType = NULL;
    this->bUseDisallowed = false;
    this->DeployTime = 0.00f;
    this->bIsBeingDeployed = false;
    this->ItemDescriptionType = EItemDescriptionType::IDT_None;
}

AActor* UInventoryItem::SpawnActor(TSubclassOf<AActor> Class, const FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, APawn* Instigator) {
    return NULL;
}

void UInventoryItem::SetUseDisallowed(bool bNewDisallowed) {
}

void UInventoryItem::SetItemDescriptionType(EItemDescriptionType EffectType) {
}




bool UInventoryItem::CanUseItem_Implementation(FString& Message) {
    return false;
}

void UInventoryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryItem, bUseDisallowed);
}


