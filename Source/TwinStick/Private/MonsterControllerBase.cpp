#include "MonsterControllerBase.h"
#include "AICrowdFollowingComponent.h"
#include "AggroComponent.h"
#include "PackController.h"

AMonsterControllerBase::AMonsterControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAICrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bShouldUseNavRecovery = true;
    this->AICrowdFollowComponent = NULL;
    this->bTotallyDisableCrowdAvoidance = false;
    this->LookAtRadius = 300.00f;
    this->RandomPointAroundMarineEQS = NULL;
    this->NonMoveCounter = 0;
    this->FailedToMoveLastCheckTime = 0.00f;
    this->NonMoveNearPlayerCheck = 0.00f;
    this->FailedToMoveCheckInterval = 0.50f;
    this->MaxCountToCheckForNonMove = 0;
    this->MaxCountStillCanNotMove = 0;
    this->bFailedToMove = false;
    this->bAnticipateTurns = true;
    this->AvoidanceQuality = ECrowdAvoidQuality::ECAQ_Good;
    this->CrowdCollisionQueryRange = 150.00f;
    this->bObstacleAvoidance = true;
    this->bCrowdSeparation = true;
    this->CrowdSeparationWeight = 2.00f;
    this->bSlowdownAtGoal = false;
    this->bDisableCrowdSimulation = false;
    this->PathOptimizationRange = 1000.00f;
    this->AvoidanceRangeMultiplier = 1.00f;
    this->bEnablePathOffset = false;
    this->bRotateToVelocity = true;
    this->bEnableOptimizeVisibility = true;
    this->bEnableOptimizeTopology = true;
    this->bClaimNavLinksOnMove = true;
    this->InnerNavLinkClaimRadius = 1000.00f;
    this->AggroComp = CreateDefaultSubobject<UAggroComponent>(TEXT("AggroComponent"));
    this->PackController = CreateDefaultSubobject<UPackController>(TEXT("PackController"));
    this->AttackTarget = NULL;
    this->MoveToAcceptableRadius = 50.00f;
    this->PreSpawnedBT = NULL;
    this->MonsterBT = NULL;
    this->PreSpawnedBB = NULL;
    this->MonsterBB = NULL;
    this->bDetectStuckWhileMoving = false;
    this->bAttackWhenCapsuleStuck = false;
}

void AMonsterControllerBase::SetAttackTarget(AActor* NewGoalActor) {
}

void AMonsterControllerBase::SetAggroTickEnabled(bool bEnable) {
}

void AMonsterControllerBase::ResumePathfollowing() {
}

void AMonsterControllerBase::ResetFailedToMove() {
}


void AMonsterControllerBase::PausePathfollowing() {
}



void AMonsterControllerBase::OnCapsuleBumpDuringMove(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void AMonsterControllerBase::MoveDueToBump() {
}

bool AMonsterControllerBase::IsCrowdFollowingDisabled() const {
    return false;
}

bool AMonsterControllerBase::HasValidPath() const {
    return false;
}

void AMonsterControllerBase::HandleTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void AMonsterControllerBase::HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime) {
}

void AMonsterControllerBase::GetPerceivedActors(TArray<AActor*>& OutActors, bool bIncludeFriendly) const {
}

TScriptInterface<IVaultablePawn> AMonsterControllerBase::GetPawnVaultable() const {
    return NULL;
}

UPackController* AMonsterControllerBase::GetPackController() const {
    return NULL;
}

int32 AMonsterControllerBase::GetNumberOfMonstersNearMe(float Radius) const {
    return 0;
}

AMonsterCharacterBase* AMonsterControllerBase::GetControlledMonster() const {
    return NULL;
}

TArray<URTSNavLinkCustomComponent*> AMonsterControllerBase::GetClaimedNavLinks() const {
    return TArray<URTSNavLinkCustomComponent*>();
}

AActor* AMonsterControllerBase::GetAttackTarget() const {
    return NULL;
}

UAggroComponent* AMonsterControllerBase::GetAggroComponent() const {
    return NULL;
}

void AMonsterControllerBase::FinishUsingNavlink() {
}

void AMonsterControllerBase::ClearAttackTarget() {
}



