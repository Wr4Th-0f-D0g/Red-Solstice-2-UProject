#include "FollowerComponent.h"
#include "Net/UnrealNetwork.h"

UFollowerComponent::UFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowerInteractionActor = NULL;
    this->PlayerUsedZipline = NULL;
    this->AttackRange = 0.00f;
    this->bIsCinematicFollower = false;
    this->FollowerChar = NULL;
    this->FollowerDirector = NULL;
    this->OverwatchDistanceFromFormationPositionThreshold = 400.00f;
    this->MoveToLocType = EFollowerMoveToLocType::Default;
    this->InteractTarget = NULL;
    this->FollowerAssignment = EFollowerAssignment::Unassigned;
    this->PrevFollowerAssignment = EFollowerAssignment::Unassigned;
    this->AssignedHero = NULL;
    this->FollowerAction = EFollowerAction::Idle;
    this->PrevFollowerAction = EFollowerAction::Idle;
    this->FollowerMovementState = EFollowerMovementState::Idle;
    this->PrevFollowerMovementState = EFollowerMovementState::Idle;
    this->FollowerType = EFollowerType::Friendly;
}

void UFollowerComponent::UnsetFollowerScripted(bool bUnregisterFromAI, bool bTurnOfWeapons) {
}

void UFollowerComponent::SetMoveToPosition(const FVector& Vector) {
}

void UFollowerComponent::SetMoveToLocType(EFollowerMoveToLocType InMoveLocType) {
}

void UFollowerComponent::SetHoldPositionLoc(const FVector& InLocation) {
}

void UFollowerComponent::SetFollowerType(EFollowerType InType) {
}

void UFollowerComponent::SetFollowerScripted() {
}

void UFollowerComponent::SetFollowerMovementState(EFollowerMovementState NewState) {
}

void UFollowerComponent::SetFollowerAttackTarget(AActor* Actor) {
}

void UFollowerComponent::SetFollowerAction(EFollowerAction NewAction) {
}

void UFollowerComponent::OnRep_FollowerType() {
}

void UFollowerComponent::OnRep_FollowerMovementState(EFollowerMovementState OldState) {
}

void UFollowerComponent::OnRep_FollowerAssignment(EFollowerAssignment OldAssignment) {
}

void UFollowerComponent::OnRep_FollowerAction(EFollowerAction OldAction) {
}

void UFollowerComponent::OnRep_AssignedHero() {
}

void UFollowerComponent::HandleFollowerRevived(AHeroCharacterBase* RevivedHero) {
}

AHeroCharacterBase* UFollowerComponent::GetScriptedAssigned() const {
    return NULL;
}

EFollowerMovementState UFollowerComponent::GetPrevFollowerMovementState() const {
    return EFollowerMovementState::Idle;
}

EFollowerAssignment UFollowerComponent::GetPrevFollowerAssignment() const {
    return EFollowerAssignment::Unassigned;
}

EFollowerAction UFollowerComponent::GetPrevFollowerAction() const {
    return EFollowerAction::Idle;
}

AHeroCharacterBase* UFollowerComponent::GetOldAssignedHero() const {
    return NULL;
}

EFollowerMoveToLocType UFollowerComponent::GetMoveToLocType() const {
    return EFollowerMoveToLocType::Default;
}

FVector UFollowerComponent::GetMoveToLocationVector() const {
    return FVector{};
}

FVector UFollowerComponent::GetHoldPositionLoc() const {
    return FVector{};
}

EFollowerType UFollowerComponent::GetFollowerType() const {
    return EFollowerType::Friendly;
}

EFollowerMovementState UFollowerComponent::GetFollowerMovementState() const {
    return EFollowerMovementState::Idle;
}

EFollowerAssignment UFollowerComponent::GetFollowerAssignment() const {
    return EFollowerAssignment::Unassigned;
}

EFollowerAction UFollowerComponent::GetFollowerAction() const {
    return EFollowerAction::Idle;
}

AHeroCharacterBase* UFollowerComponent::GetAssignedHero() const {
    return NULL;
}







void UFollowerComponent::AssignFollowerTo(AHeroCharacterBase* NewAssignedHero) {
}



void UFollowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFollowerComponent, FollowerAssignment);
    DOREPLIFETIME(UFollowerComponent, AssignedHero);
    DOREPLIFETIME(UFollowerComponent, FollowerAction);
    DOREPLIFETIME(UFollowerComponent, FollowerMovementState);
    DOREPLIFETIME(UFollowerComponent, FollowerType);
}


