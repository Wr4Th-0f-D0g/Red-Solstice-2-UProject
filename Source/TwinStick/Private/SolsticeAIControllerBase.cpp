#include "SolsticeAIControllerBase.h"
#include "Net/UnrealNetwork.h"

ASolsticeAIControllerBase::ASolsticeAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentRunningBT = NULL;
    this->AIVisionAngle = 45.00f;
    this->MyPawn = NULL;
    this->MoveTarget = NULL;
    this->MoveToActorClass = NULL;
    this->bDoTokenCheckBeforeChoosingTarget = false;
    this->bShouldUseNavRecovery = false;
    this->NavRecoveryAbility = ETRSNavRecoveryAbility::OffNavMesh;
    this->bPathRequestSuccessful = false;
    this->bPathRequestActive = false;
    this->bFailedNavigation = false;
    this->bFailedNavigationStartedOnNavMesh = false;
    this->NavFailureCurrentCount = 0;
    this->NavFailureFirstFailTime = 0.00f;
    this->NavRecoveryStartTime = 0.00f;
    this->NavRecoveryCounter = 0;
}

void ASolsticeAIControllerBase::TickNavMeshRecovery_Implementation(float DeltaTIme, FVector Location, FVector RecoveryDestination) {
}

void ASolsticeAIControllerBase::TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

bool ASolsticeAIControllerBase::SuggestProjectileVelocity_MediumArc(FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos) {
    return false;
}

bool ASolsticeAIControllerBase::SuggestProjectileVelocity_CustomArc(FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float ArcParam) {
    return false;
}

void ASolsticeAIControllerBase::SpawnMoveTargetActor() {
}

void ASolsticeAIControllerBase::SetVaultingFocalPont(FVector FP) {
}

void ASolsticeAIControllerBase::SetNavSearchRadiiCurrent(float NewInnerRadius, float NewOuterRadius) {
}

void ASolsticeAIControllerBase::SetNavRecoveryDestination(FVector Destination) {
}

void ASolsticeAIControllerBase::SetGoalActor(AActor* NewGoalActor) {
}



void ASolsticeAIControllerBase::NotifyStartNavRecovery_Implementation(FVector FailedGoalLocation, bool bCurrentlyOnNavMesh) {
}

void ASolsticeAIControllerBase::NotifyRequestingPath_Implementation() {
}

void ASolsticeAIControllerBase::NotifyPathRequestSuccess_Implementation(FVector GoalLocation) {
}

bool ASolsticeAIControllerBase::NotifyPathRequestFailed_Implementation(FVector GoalLocation) {
    return false;
}

void ASolsticeAIControllerBase::NotifyNavMeshRecoveryFailed_Implementation(FVector Location, float TimeSinceStartRecovery, bool bWasOnNavMeshAtStart) {
}

void ASolsticeAIControllerBase::NotifyNavMeshRecovered_Implementation() {
}

void ASolsticeAIControllerBase::NotifyFailedToFindRecoveryDestination_Implementation(float DeltaTIme, FVector Location, float TimeSinceStartRecovery) {
}


bool ASolsticeAIControllerBase::IsFailingNavigationFromValidNavMesh() const {
    return false;
}

bool ASolsticeAIControllerBase::IsFailingNavigation() const {
    return false;
}

bool ASolsticeAIControllerBase::IsFacingTarget(FVector TargetLoc, float AngleToleranceDeg) const {
    return false;
}

bool ASolsticeAIControllerBase::IsAlive() const {
    return false;
}

void ASolsticeAIControllerBase::InvalidatePathWhilstLinking() {
}

void ASolsticeAIControllerBase::HandlePreviewAbilityActivationChanged(UAbilityBase* Ability, EActivationStatus Status, const FGameplayTag& AbilityTag) {
}

void ASolsticeAIControllerBase::HandleMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

void ASolsticeAIControllerBase::HandleActiveAbilityActivationChanged(UAbilityBase* Ability, EActivationStatus Status, const FGameplayTag& AbilityTag) {
}

bool ASolsticeAIControllerBase::HandleAbilityRequestedMove(UActorComponent* InstigatorComponent, FVector TargetLocation, float AcceptanceRadius) {
    return false;
}

void ASolsticeAIControllerBase::GrowNavSearchRadiiCurrent(float InnerGrowth, float OuterGrowth) {
}

void ASolsticeAIControllerBase::GoalActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

FVector ASolsticeAIControllerBase::GetTargetLocationForManual_Implementation() const {
    return FVector{};
}

FVector ASolsticeAIControllerBase::GetTargetedLocation_Implementation() const {
    return FVector{};
}

void ASolsticeAIControllerBase::GetNavSearchRadiiDefault(float& DefaultInnerRadius, float& DefaultOuterRadius) const {
}

void ASolsticeAIControllerBase::GetNavSearchRadiiCurrent(float& CurrentInnerRadius, float& CurrentOuterRadius) const {
}

FVector ASolsticeAIControllerBase::GetNavRecoveryDestination() const {
    return FVector{};
}

AActor* ASolsticeAIControllerBase::GetGoalActor() const {
    return NULL;
}

bool ASolsticeAIControllerBase::DoJumpLaunchWithPrecomputedVelocity(const FTransform& Destination, FVector LaunchVelocity, float Arc, const AActor* JumpFromActor, float& OutAscendingTime, float& OutDescendingTime) {
    return false;
}

bool ASolsticeAIControllerBase::DoJumpLaunch(const FTransform& Destination, float Arc, const AActor* JumpFromActor, float& OutAscendingTime, float& OutDescendingTime) {
    return false;
}

void ASolsticeAIControllerBase::ClientAbortActiveAbility_Implementation() {
}

void ASolsticeAIControllerBase::ClearVaultingFocalPoint() {
}

void ASolsticeAIControllerBase::ClearGoalActor() {
}

void ASolsticeAIControllerBase::CheckGoalActorVisible(bool bImmediate) {
}

bool ASolsticeAIControllerBase::CanSeeGoalActor() const {
    return false;
}

void ASolsticeAIControllerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASolsticeAIControllerBase, GoalActor);
}


