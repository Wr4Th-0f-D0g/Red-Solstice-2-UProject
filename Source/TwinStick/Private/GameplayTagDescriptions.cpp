#include "GameplayTagDescriptions.h"

UGameplayTagDescriptions::UGameplayTagDescriptions() {
    this->GameplayTagDescriptionsTable = NULL;
}

FGameplayTagDescription UGameplayTagDescriptions::GetGameplayTagDescription(FGameplayTag InTag) const {
    return FGameplayTagDescription{};
}


