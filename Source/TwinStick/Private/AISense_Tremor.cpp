#include "AISense_Tremor.h"

UAISense_Tremor::UAISense_Tremor() {
    this->SpeedOfTremorSq = 0.00f;
}

void UAISense_Tremor::ReportTremorEvent(UObject* WorldContextObject, FVector TremorLocation, float Strength, AActor* Instigator, float MaxRange, FName Tag) {
}


