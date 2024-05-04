#include "PowerRelay.h"
#include "Net/UnrealNetwork.h"

APowerRelay::APowerRelay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->GeneratedPower = 0;
    this->RelayState = EPowerRelayState::EPR_Undefined;
    this->bIsMainSectorRelay = false;
    this->bIsDebugEnabled = false;
    this->LinkedTerminal = NULL;
    this->bIsDebugLineEnabled = true;
    this->bShouldFlushPersistantDebugLines = true;
    this->bIsDebugLinePersistent = true;
    this->DebugLineDuration = 0.00f;
    this->DebugLineDepthPriority = 2;
    this->DebugLineThickness = 10.00f;
}

void APowerRelay::SetState(EPowerRelayState NewState) {
}


void APowerRelay::OnRep_RelayState() {
}

void APowerRelay::ForceInteractAnyRange(APawn* InstigatorPawn) {
}

void APowerRelay::DrawInteractionLocation() {
}

void APowerRelay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerRelay, RelayState);
}


