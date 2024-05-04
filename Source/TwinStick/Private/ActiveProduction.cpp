#include "ActiveProduction.h"

FActiveProduction::FActiveProduction() {
    this->ItemCount = 0;
    this->BuildTimeElapsed = 0.00f;
    this->ProductionStatus = EProductionStatus::Invalid;
    this->bPausedFromInput = false;
}

