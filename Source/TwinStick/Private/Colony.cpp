#include "Colony.h"
#include "Net/UnrealNetwork.h"

AColony::AColony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColonyRegion = NULL;
}

void AColony::UpdateColonyVisualState() {
}




void AColony::OnRRep_RandomColonyBonus() {
}

ARegion* AColony::GetColonyRegion() {
    return NULL;
}

bool AColony::GetColonyBonusText(FText& OutText) {
    return false;
}



void AColony::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AColony, RandomColonyBonus);
}


