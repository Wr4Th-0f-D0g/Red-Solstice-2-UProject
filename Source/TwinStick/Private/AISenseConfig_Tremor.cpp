#include "AISenseConfig_Tremor.h"
#include "AISense_Tremor.h"

UAISenseConfig_Tremor::UAISenseConfig_Tremor() {
    this->Implementation = UAISense_Tremor::StaticClass();
    this->TremorRange = 3000.00f;
}


