#include "FlyingMonsterComponentBase.h"
#include "Net/UnrealNetwork.h"

UFlyingMonsterComponentBase::UFlyingMonsterComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HighAirborneHeight = 6000.00f;
    this->LowAirborneHeight = 600.00f;
    this->FlyingState = EFlyingState::None;
    this->PrevFlyingState = EFlyingState::None;
}

bool UFlyingMonsterComponentBase::TryGotoState(EFlyingState NewState) {
    return false;
}

void UFlyingMonsterComponentBase::OnRep_FlyingState(EFlyingState OldState) {
}

void UFlyingMonsterComponentBase::OnChangedFlyingState_Implementation(EFlyingState NewState, EFlyingState OldState) {
}

EFlyingState UFlyingMonsterComponentBase::K2_GetPrevFlyingState() const {
    return EFlyingState::None;
}

EFlyingState UFlyingMonsterComponentBase::K2_GetFlyingState() const {
    return EFlyingState::None;
}

bool UFlyingMonsterComponentBase::CheckCanSwitchState_Implementation(EFlyingState NewState, EFlyingState CurrentState) {
    return false;
}

void UFlyingMonsterComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlyingMonsterComponentBase, FlyingState);
}


