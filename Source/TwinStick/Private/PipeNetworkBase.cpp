#include "PipeNetworkBase.h"
#include "Net/UnrealNetwork.h"

APipeNetworkBase::APipeNetworkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->DeathTime = 0.00f;
    this->PipeNetworkState = 0;
}




void APipeNetworkBase::OnRep_PipeNetworkState(uint8 OldState) {
}

bool APipeNetworkBase::IsLeakingGas() const {
    return false;
}

bool APipeNetworkBase::IsInactive() const {
    return false;
}

bool APipeNetworkBase::IsHatchOpen() const {
    return false;
}

bool APipeNetworkBase::IsDestroyed() const {
    return false;
}



void APipeNetworkBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipeNetworkBase, DeathTime);
    DOREPLIFETIME(APipeNetworkBase, PipeNetworkState);
}


