#include "DynamicBuffBase.h"
#include "Net/UnrealNetwork.h"

UDynamicBuffBase::UDynamicBuffBase() {
}

void UDynamicBuffBase::OnRep_ReplicatedModifiers() {
}

void UDynamicBuffBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDynamicBuffBase, ReplicatedModifiers);
}


