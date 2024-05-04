#include "SoundInstanceScheduledChangeObjtBase.h"

USoundInstanceScheduledChangeObjtBase::USoundInstanceScheduledChangeObjtBase() {
    this->Delay = 0.00f;
    this->DesiredValue = 0.00f;
    this->ChangeTime = 0.00f;
    this->ActiveTime = 0.00f;
    this->InitValue = 0.00f;
    this->Curve = NULL;
    this->bChangeSequentially = false;
}


