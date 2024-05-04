#include "PlayReplicatedMontageTask.h"

UPlayReplicatedMontageTask::UPlayReplicatedMontageTask() {
    this->CachedMontage = NULL;
    this->CachedCharacter = NULL;
}

UPlayReplicatedMontageTask* UPlayReplicatedMontageTask::PlayReplicatedMontageAndWait(ASolsticeCharacterBase* Character, UAnimMontage* MontageToPlay, FMontageInfoTags MontageTags, float InPlayRate, float StartPosition, FName StartSection, UObject* Payload) {
    return NULL;
}

void UPlayReplicatedMontageTask::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UPlayReplicatedMontageTask::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UPlayReplicatedMontageTask::MontageNotify(FGameplayTag NotifyTag, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}


