#include "BTTask_PlayMontage.h"

UBTTask_PlayMontage::UBTTask_PlayMontage() {
    this->NodeName = TEXT("Play Replicated Montage");
    this->MontageToPlay = NULL;
    this->PlayRate = 1.00f;
    this->StartPos = 0.00f;
    this->bUseBBKeyAsPlayRate = false;
}


