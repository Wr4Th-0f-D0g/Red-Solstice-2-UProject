#include "MonsterVaultingComponent.h"

UMonsterVaultingComponent::UMonsterVaultingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VaultMontage = NULL;
    this->VaultPlayRate = 1.00f;
    this->VaultStartPos = 0.00f;
    this->VaultTimeOut = 0.50f;
    this->Monster = NULL;
    this->MonsterController = NULL;
    this->CachedVaultActor = NULL;
    this->OffsetCurve = NULL;
    this->Duration = 0.00f;
}

void UMonsterVaultingComponent::OnMontageNotify(FGameplayTag NotifyGameplayTag, ASolsticeCharacterBase* InCharacter) {
}

void UMonsterVaultingComponent::OnMontageCompleted(FGameplayTag NotifyGameplayTag, ASolsticeCharacterBase* InCharacter) {
}


