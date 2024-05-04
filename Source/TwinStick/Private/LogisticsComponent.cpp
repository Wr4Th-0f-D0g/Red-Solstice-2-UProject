#include "LogisticsComponent.h"
#include "Net/UnrealNetwork.h"

ULogisticsComponent::ULogisticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeroData = NULL;
    this->EngineeringData = NULL;
    this->SelectedBots.AddDefaulted(3);
    this->SelectedItems.AddDefaulted(3);
    this->SelectedItemsData.AddDefaulted(3);
}

void ULogisticsComponent::SetSelectedItems(const TArray<FGameplayTag>& InItemTags) {
}

void ULogisticsComponent::SetSelectedBots(const TArray<UBotStatus*>& InBots) {
}

bool ULogisticsComponent::RemoveItem(const FGameplayTag& InItemTag) {
    return false;
}

bool ULogisticsComponent::RemoveBot(UBotStatus* InBotStatus) {
    return false;
}

void ULogisticsComponent::OnRep_SelectedItems(const TArray<FGameplayTag>& OldItems) {
}

void ULogisticsComponent::OnRep_SelectedBots(const TArray<UBotStatus*>& OldBots) {
}

int32 ULogisticsComponent::GetNumberOfItems() const {
    return 0;
}

int32 ULogisticsComponent::GetNumberOfBots() const {
    return 0;
}

bool ULogisticsComponent::AddItem(const FGameplayTag& InItemTag) {
    return false;
}

bool ULogisticsComponent::AddBot(UBotStatus* InBotStatus) {
    return false;
}

void ULogisticsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULogisticsComponent, SelectedBots);
    DOREPLIFETIME(ULogisticsComponent, SelectedItems);
}


