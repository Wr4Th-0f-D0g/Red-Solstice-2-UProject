#include "MinimapActorBase.h"
#include "Net/UnrealNetwork.h"

AMinimapActorBase::AMinimapActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->Radius = 0.00f;
    this->bAreaIcon = false;
    this->bNotShownOnMinimap = false;
}


void AMinimapActorBase::OnRep_NotShownOnMinimap() {
}

void AMinimapActorBase::OnRep_MissionText() {
}

void AMinimapActorBase::OnRep_Mission() {
}

void AMinimapActorBase::OnRep_MinimapActor() {
}




bool AMinimapActorBase::IsPrimaryMissionMarker() const {
    return false;
}

AMissionBase* AMinimapActorBase::GetMission() const {
    return NULL;
}

void AMinimapActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMinimapActorBase, Radius);
    DOREPLIFETIME(AMinimapActorBase, bAreaIcon);
    DOREPLIFETIME(AMinimapActorBase, MissionText);
    DOREPLIFETIME(AMinimapActorBase, bNotShownOnMinimap);
    DOREPLIFETIME(AMinimapActorBase, Mission);
}


