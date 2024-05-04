#include "AISense_Scent.h"

UAISense_Scent::UAISense_Scent() {
    this->SpeedOfScentSq = 0.00f;
}

void UAISense_Scent::ReportScentEvent(UObject* WorldContextObject, FVector ScentLocation, float Strength, AActor* Instigator, float MaxRange, FName Tag) {
}


