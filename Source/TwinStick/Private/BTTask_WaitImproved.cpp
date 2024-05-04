#include "BTTask_WaitImproved.h"

UBTTask_WaitImproved::UBTTask_WaitImproved() {
    this->NodeName = TEXT("Wait");
    this->WaitTime = 2.00f;
    this->RandomDeviation = 0.00f;
    this->OwnerComps = NULL;
}


