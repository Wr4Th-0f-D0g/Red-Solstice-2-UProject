#include "MissionObjectiveTracker.h"
#include "Net/UnrealNetwork.h"

UMissionObjectiveTracker::UMissionObjectiveTracker() {
    this->EmptyProp = 0;
    this->MissionBase = NULL;
    this->MissionTask = NULL;
}


void UMissionObjectiveTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMissionObjectiveTracker, EmptyProp);
}


