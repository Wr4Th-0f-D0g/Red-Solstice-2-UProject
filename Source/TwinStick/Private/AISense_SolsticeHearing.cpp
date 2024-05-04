#include "AISense_SolsticeHearing.h"

UAISense_SolsticeHearing::UAISense_SolsticeHearing() {
    this->SpeedOfSoundSq = 0.00f;
}

void UAISense_SolsticeHearing::ReportSolsticeNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, FGameplayTag NoiseTag, float Loudness, AActor* Instigator, float MaxRange) {
}


