#include "PlacedItemsSubsystem.h"

UPlacedItemsSubsystem::UPlacedItemsSubsystem() {
}

void UPlacedItemsSubsystem::UnregisterPlacedItemInWorld(AActor* NewBuildableActor) {
}

void UPlacedItemsSubsystem::ToggleTeleportPad(AAbilityActorBase* TeleportPad, bool Enable) {
}

void UPlacedItemsSubsystem::ToggleItem(AActor* InItem, FGameplayTag InTag, bool Enable) {
}

bool UPlacedItemsSubsystem::ShouldRegisterItem(AActor* ItemToRegister) const {
    return false;
}

void UPlacedItemsSubsystem::RegisterPlacedItemInWorld(AActor* NewBuildableActor) {
}

void UPlacedItemsSubsystem::RegisterActorWithTag(AActor* NewBuildableActor, FGameplayTag Tag) {
}

bool UPlacedItemsSubsystem::IsTeleportPadDisabled(AAbilityActorBase* TeleportPad) const {
    return false;
}

bool UPlacedItemsSubsystem::IsSphereClippingThroughObjects(FVector Start, FVector End, float Radius) const {
    return false;
}

bool UPlacedItemsSubsystem::IsPlacementNearOtherItem(const UAbilityBase* ItemToBePlaced, FVector Placement) const {
    return false;
}

bool UPlacedItemsSubsystem::IsNearOtherItem(const UAbilityBase* ItemToBePlaced) const {
    return false;
}

bool UPlacedItemsSubsystem::IsItemDisabled(AActor* TestedActor, FGameplayTag InGameplayTag) const {
    return false;
}

bool UPlacedItemsSubsystem::IsActorClippingThroughObjects(const AAoE_MarkerBase* Marker, float Radius) const {
    return false;
}

TArray<AActor*> UPlacedItemsSubsystem::GetPlacedItems(const FGameplayTag& InTag) const {
    return TArray<AActor*>();
}

AActor* UPlacedItemsSubsystem::GetItemInBlockingRangeOfPlacement(const UAbilityBase* ItemToBePlaced, FVector Placement) const {
    return NULL;
}

AActor* UPlacedItemsSubsystem::GetItemInBlockingRange(const UAbilityBase* ItemToBePlaced) const {
    return NULL;
}

AAbilityActorBase* UPlacedItemsSubsystem::GetClosestTeleportPad(AAbilityBuildableActorBase* FromTeleportPad) const {
    return NULL;
}

AAbilityActorBase* UPlacedItemsSubsystem::GetClosestItem(AActor* FromActor, FGameplayTag InTag) const {
    return NULL;
}

TArray<AActor*> UPlacedItemsSubsystem::FindItemsInRangeByTag(TArray<FGameplayTag> InTags, FVector Origin, float Range) const {
    return TArray<AActor*>();
}

TArray<AActor*> UPlacedItemsSubsystem::FindItemsInRange(FVector Origin, float Range) const {
    return TArray<AActor*>();
}

void UPlacedItemsSubsystem::EnableTeleportPad(AAbilityActorBase* TeleportPad) {
}

void UPlacedItemsSubsystem::EnableItem(AActor* InItem, FGameplayTag InTag) {
}

void UPlacedItemsSubsystem::DisableTeleportPad(AAbilityActorBase* TeleportPad) {
}

void UPlacedItemsSubsystem::DisableItem(AActor* InItem, FGameplayTag InTag) {
}


