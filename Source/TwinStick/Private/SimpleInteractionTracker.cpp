#include "SimpleInteractionTracker.h"

FSimpleInteractionTracker::FSimpleInteractionTracker() {
    this->InteractionsRemaining = 0;
    this->bInteractionEnabled = false;
    this->InteractionTimeRemaining = 0.00f;
    this->Timestamp = 0.00f;
}

