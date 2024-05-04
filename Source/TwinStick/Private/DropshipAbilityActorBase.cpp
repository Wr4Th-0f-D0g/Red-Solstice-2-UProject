#include "DropshipAbilityActorBase.h"
#include "Net/UnrealNetwork.h"

ADropshipAbilityActorBase::ADropshipAbilityActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QueryFilter = NULL;
    this->bPendingDestroy = false;
    this->bTargetImmediatelyOnRadiusPawns = true;
    this->RadiusPSC = NULL;
    this->TimelineCurveFloat = NULL;
    this->DropshipMesh = NULL;
    this->DropshipLocationParticle = NULL;
    this->DropshipRopeComp = NULL;
    this->bDropshipReadyForPickup = false;
    this->DropshipTargetLocationArrow = NULL;
    this->bDropRopes = false;
    this->RopeLocationEmitter = NULL;
    this->MarineEvacRopeMontage = NULL;
    this->DropshipBuff = NULL;
    this->MarineRopeDropMontage = NULL;
    this->RopeDropAnimation = NULL;
    this->RopeSkeletalMesh = NULL;
    this->RadiusEmitter = NULL;
    this->Targeter = NULL;
    this->WidgetComp = NULL;
}



void ADropshipAbilityActorBase::OnRep_PendingDestroy() {
}

void ADropshipAbilityActorBase::NetMulticastSpawnSingularDropRope_Implementation(const TArray<ASolsticeCharacterBase*>& Chars) {
}

void ADropshipAbilityActorBase::NetMulticastSpawnDropRopes_Implementation(bool bDrop) {
}

void ADropshipAbilityActorBase::NetMulticastSetDropshipMeshesVisible_Implementation(bool bNewVisible) {
}

void ADropshipAbilityActorBase::NetMulticastHideRope_Implementation(uint8 RopeID) {
}

void ADropshipAbilityActorBase::NetMulticastDropshipLocation_Implementation(const FVector& Loc) {
}

void ADropshipAbilityActorBase::MoveDropshipToTargetLocation() {
}

void ADropshipAbilityActorBase::MoveDropshipToLocation() {
}

void ADropshipAbilityActorBase::LocationChosen(const FVector& InTargetLocation) {
}

void ADropshipAbilityActorBase::HandleTimelinePostUpdate() {
}

void ADropshipAbilityActorBase::HandleTimelineFloat(float InFloat) {
}

void ADropshipAbilityActorBase::HandleTimelineFinished() {
}

int32 ADropshipAbilityActorBase::GetMaxPawnsForDropship() const {
    return 0;
}

bool ADropshipAbilityActorBase::CheckTargetLocationIsValid(const FVector& Location) {
    return false;
}

void ADropshipAbilityActorBase::CheckForMarineAtRopes() {
}



void ADropshipAbilityActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADropshipAbilityActorBase, bPendingDestroy);
    DOREPLIFETIME(ADropshipAbilityActorBase, Timeline);
}


