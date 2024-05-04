#include "SolsticeSavedBuff.h"

FSolsticeSavedBuff::FSolsticeSavedBuff() {
    this->BuffClass = NULL;
    this->Stacks = 0;
    this->DurationGroup = EBuffDuration::EBD_Instant;
    this->RemainingDuration = 0.00f;
}

