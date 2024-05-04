#include "DynamicActorBase.h"

ADynamicActorBase::ADynamicActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->bShouldRegisterWithNetworkManager = false;
    this->NetworkManager = NULL;
}

void ADynamicActorBase::SetDynamicActorGuid(const FGuid& InGuid) {
}

void ADynamicActorBase::RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove) {
}

void ADynamicActorBase::RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove) {
}

void ADynamicActorBase::RegenerateDynamicActorGuid() {
}



void ADynamicActorBase::HandleActorArraysPopulated(ULocationManager* LocationManager) {
}

void ADynamicActorBase::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}

FGuid ADynamicActorBase::GetDynamicActorGuid() const {
    return FGuid{};
}

void ADynamicActorBase::GetActorGameplayTags(FGameplayTagContainer& TagContainer) const {
}

void ADynamicActorBase::AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd) {
}

void ADynamicActorBase::AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd) {
}


