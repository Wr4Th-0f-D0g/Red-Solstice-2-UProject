#include "DropshipPlayer.h"

UDropshipPlayer::UDropshipPlayer() {
    this->Character = NULL;
    this->Dropship = NULL;
    this->DropshipBuff = NULL;
}

void UDropshipPlayer::HandlePawnRiseMontageFinished(FGameplayTag NotifyTag, ASolsticeCharacterBase* Char) {
}

void UDropshipPlayer::HandlePawnRiseCancelledMontageFinished(FGameplayTag NotifyTag, ASolsticeCharacterBase* Char) {
}

void UDropshipPlayer::HandleMarineEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UDropshipPlayer::HandleMarineDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}


