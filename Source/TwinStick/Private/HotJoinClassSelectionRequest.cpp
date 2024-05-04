#include "HotJoinClassSelectionRequest.h"

FHotJoinClassSelectionRequest::FHotJoinClassSelectionRequest() {
    this->RequestedClass = ESolsticeHeroClass::ESHC_Invalid;
    this->Timestamp = 0.00f;
    this->bClassApproved = false;
}

