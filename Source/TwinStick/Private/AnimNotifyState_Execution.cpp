#include "AnimNotifyState_Execution.h"

UAnimNotifyState_Execution::UAnimNotifyState_Execution() {
    this->LocationInterpSpeed = 10.00f;
    this->RotationInterpSpeed = 25.00f;
    this->Socket = TEXT("ExecuteSocket");
    this->bUseSocketZ = false;
}


