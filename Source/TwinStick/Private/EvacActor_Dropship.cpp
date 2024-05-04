#include "EvacActor_Dropship.h"

AEvacActor_Dropship::AEvacActor_Dropship(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RopeRiseMontage = NULL;
    this->RopeDropMontage = NULL;
}

void AEvacActor_Dropship::MulticastPlayMontage_Implementation(const FEvacRope& Rope, UAnimMontage* SelectedMontage) {
}


