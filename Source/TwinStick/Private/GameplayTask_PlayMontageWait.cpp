#include "GameplayTask_PlayMontageWait.h"

UGameplayTask_PlayMontageWait::UGameplayTask_PlayMontageWait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedMontageToPlay = NULL;
    this->CachedOwningAbility = NULL;
    this->bCachedIsServer = false;
    this->CachedRate = 0.00f;
    this->CachedStartPosition = 0.00f;
    this->bCachedStopWhenAbilityEnds = false;
}

void UGameplayTask_PlayMontageWait::OnMontageInterrupted(UAbilityBase* Ability, const FGameplayTag& AbilityTag) {
}

void UGameplayTask_PlayMontageWait::OnMontageGameplayTagNotify(FGameplayTag GameplayTag, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void UGameplayTask_PlayMontageWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UGameplayTask_PlayMontageWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UGameplayTask_PlayMontageWait* UGameplayTask_PlayMontageWait::CreatePlayMontageAndWaitProxy(UObject* WorldContextObject, FName TaskInstanceName, UAnimMontage* MontageToPlay, float PlayRate, float StartPosition, FName StartSection, UObject* Payload, bool bStopWhenAbilityEnds, UAbilityBase* OwningAbility, bool bIsServer) {
    return NULL;
}


