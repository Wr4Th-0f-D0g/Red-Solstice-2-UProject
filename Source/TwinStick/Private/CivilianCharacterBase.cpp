#include "CivilianCharacterBase.h"
#include "ESolsticeSignificanceType.h"

ACivilianCharacterBase::ACivilianCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BrutalExplodeComponent = NULL;
    this->EnvironmentInteractionComponent = NULL;
    this->SignificanceType = ESolsticeSignificanceType::Civilians;
    this->MovementStatus = ECivilianMovementStatus::WaitingForRescue;
    this->WaitType = ECivilianWaitType::None;
    this->ChosenMovement = ECivilianChosenMovement::RescueAndFollow;
    this->bIsEvacuating = false;
    this->bCanEnterEvac = false;
}


void ACivilianCharacterBase::SelectMovement(ECivilianChosenMovement NewMovement) {
}


void ACivilianCharacterBase::GotoWaitType(ECivilianWaitType NewWait) {
}

void ACivilianCharacterBase::GotoMovementStatus(ECivilianMovementStatus NewStatus) {
}


