#include "MonsterCharacterBase.h"
#include "Components/BoxComponent.h"
#include "AimOffsetComponent.h"
#include "DamageComponent.h"
#include "DarkenMeshComponent.h"
#include "DissolveComponent.h"
#include "ECharacterType.h"
#include "ESolsticeSignificanceType.h"
#include "EnergyComponent.h"
#include "FOWHideComponent.h"
#include "MonsterMovementComponent.h"
#include "MonsterVaultingComponent.h"
#include "MonsterWeaponComponent.h"
#include "Net/UnrealNetwork.h"
#include "SuppressionComponent.h"
#include "Templates/SubclassOf.h"

AMonsterCharacterBase::AMonsterCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMonsterMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(1);
    this->CharacterType = ECharacterType::ECT_Monster;
    this->AITargetAttachPoint = NULL;
    this->ActiveWeaponComponent = CreateDefaultSubobject<UMonsterWeaponComponent>(TEXT("TRS_WeaponComponent"));
    this->WeaponComponent = (USolsticeWeaponComponent*)ActiveWeaponComponent;
    this->EnvironmentInteractionComponent = NULL;
    this->SignificanceType = ESolsticeSignificanceType::Monster;
    this->bBeginningVault = false;
    this->bWantsToMelee = false;
    this->AttackSoundEvent = NULL;
    this->DeathSoundEvent = NULL;
    this->bNoPermanentHealthBar = false;
    this->bDisableSpawningAnimSharing = false;
    this->bAnimSharing = false;
    this->bMonsterEngaged = false;
    this->DynamicHealthBarTimeout = 0.00f;
    this->bGlitchBreakpoint = false;
    this->DistanceToTickEveryFrameSq = 64000000.00f;
    this->bFromWave = false;
    this->bKillMonstersOnHit = false;
    this->MonstersToKillVelocityThreshold = 50.00f;
    this->KillMonstersOnHitTimerTick = 0.25f;
    this->TickTimeDistanceOptimized = 0.12f;
    this->bAdjustNetFreqDynamic = true;
    this->MinNetPriority = 1.60f;
    this->MaxNetPriority = 2.80f;
    this->MinNetFreqDynamic = 20.00f;
    this->MaxNetFreqDynamic = 80.00f;
    this->NetOptimizationMaxDistanceSq = 225000000.00f;
    this->NetOptimizationMinDistanceSq = 64000000.00f;
    this->ClosestPlayerPawnUpdateTime = 0.15f;
    this->AnimState = ESolsticeAnimationSharingState::Idle;
    this->GameDifficultyBuffClass = NULL;
    this->PlayerCountBuffClass = NULL;
    this->ArtilleryDamageBuffClass = NULL;
    this->bNeedsWeaponComponent = false;
    this->GameDifficultyBuff = NULL;
    this->PlayerCountBuff = NULL;
    this->bSpawnerSpawned = true;
    this->bUseMonsterDetailsAttributesPrePlaced = false;
    this->SpawnType = EMonsterSpawnType::Instant;
    this->ActiveAttackSkill = NULL;
    this->DissolveDamageType = EDissolveType::DTKinetic;
    this->DeathAnimSeconds = 0.00f;
    this->bManualBrutalExplode = false;
    this->bDoNoDamageToMonster = false;
    this->LastDamageGroup = EDamageGroup::EDT_None;
    this->LastDamageTime = 0.00f;
    this->bPooledMonster = false;
    this->GoalActor = NULL;
    this->AttackTarget = NULL;
    this->DropSpawnMontage = NULL;
    this->InstantSpawnMontage = NULL;
    this->UnburrowSpawnMontage = NULL;
    this->bUsesStandardMelee = false;
    this->MaxMeleeRange = 300.00f;
    this->MeleeConeAngle = 30.00f;
    this->MeleePlayRate = 1.00f;
    this->MeleeAttackMovementDistance = 0.00f;
    this->PlayerSpeedForCloserAttack = 0.00f;
    this->MeleeEnableRange = 700.00f;
    this->MeleeCheckTime = 0.30f;
    this->ExecutionRange = 200.00f;
    this->MeleeSkill = NULL;
    this->FOWHideComponent = CreateDefaultSubobject<UFOWHideComponent>(TEXT("FOWHide"));
    this->bFowVisibilityNeedsForceUpdate = false;
    this->ActualAppliedFowHideValue = -1.00f;
    this->bCooldownNavlinks = false;
    this->NavlinkCooldownTime = 1.00f;
    this->MonsterVaultingComponent = CreateDefaultSubobject<UMonsterVaultingComponent>(TEXT("MonsterVaultingComp"));
    this->bEnteredCircling = false;
    this->SnatcherTokenID = 0;
    this->MonsterController = NULL;
    this->bMonsterHovered = false;
    this->bHitReact = false;
    this->HitReactAlpha = 0.00f;
    this->ReplicatedFlags = 0;
    this->bPatrolMonster = false;
    this->bReturnToInnerRadiusWhenAtOuterRadius = true;
    this->PatrolInnerRadius = -1.00f;
    this->PatrolIgnoreTraceRadius = 1000.00f;
    this->PatrolOuterRadius = -1.00f;
    this->bIsRequestingPath = false;
    this->bIsPathRequestSuccess = false;
    this->DynamicMaterial = NULL;
    this->FresnalColorMult = 0.00f;
    this->bAlignMonsterToFloor = true;
    this->StunStep = 0;
    this->StunEffectComponent = NULL;
    this->StunParticle = NULL;
    this->bIsStunned = false;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->HealthBarWidgetClass = NULL;
    this->MonsterSpeedBoostComponent = NULL;
    this->MeleeRangeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MeleeRangeBox"));
    this->OuterMeleeRangeBox = NULL;
    this->SupressionComponent = CreateDefaultSubobject<USuppressionComponent>(TEXT("SupressionComponent"));
    this->DissolveComponent = CreateDefaultSubobject<UDissolveComponent>(TEXT("DissolveComponent"));
    this->DarkenMeshComponent = CreateDefaultSubobject<UDarkenMeshComponent>(TEXT("DarkenMeshComponent"));
    this->MonsterEnergyComponent = CreateDefaultSubobject<UEnergyComponent>(TEXT("EnergyComponent"));
    this->AimOffsetComponent = CreateDefaultSubobject<UAimOffsetComponent>(TEXT("AimOffsetComponent"));
    this->MonsterUnburrowBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MonsterUnburrowBox"));
    this->BurrowingComponent = NULL;
    this->ArmorHitSound = NULL;
    this->NormalHitSound = NULL;
    this->ReplSuppression = 0.00f;
    this->MonsterUnburrowBox->SetupAttachment(RootComponent);
    this->DamageComponent->SetupAttachment(RootComponent);
    this->MeleeRangeBox->SetupAttachment(RootComponent);
    this->AimOffsetComponent->SetupAttachment(RootComponent);
}

void AMonsterCharacterBase::TryAddingToArray() {
}

void AMonsterCharacterBase::ToggleMeleeTimer(bool bEnable) {
}

void AMonsterCharacterBase::ToggleHealthBarVisibility(bool bVisible) {
}

void AMonsterCharacterBase::TagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag) {
}

void AMonsterCharacterBase::TagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag) {
}

void AMonsterCharacterBase::StopAI() {
}

void AMonsterCharacterBase::StartAI() {
}

void AMonsterCharacterBase::ShowStunParticles_Implementation(bool bTurnOn) {
}

void AMonsterCharacterBase::SetSpawnType(EMonsterSpawnType InSpawnType) {
}

void AMonsterCharacterBase::SetMonsterWeapon(FCharacterWeaponData WeaponData) {
}

void AMonsterCharacterBase::SetMonsterTicksDisabled(bool bDisabled) {
}

void AMonsterCharacterBase::SetMonsterRenderPassDisabled(bool bNewDisabled) {
}

void AMonsterCharacterBase::SetMonsterMeshHidden(bool bNewHidden) {
}

void AMonsterCharacterBase::SetMonsterHolographic(bool bNewHolographic) {
}

void AMonsterCharacterBase::SetIdleOptimized(bool bOptimized, bool bSwitchBehaviourTrees) {
}

void AMonsterCharacterBase::SetFiringMode(EFiringMode FiringMode) {
}

void AMonsterCharacterBase::SetFireEnabled(bool bEnabled) {
}

void AMonsterCharacterBase::SetAnimState(ESolsticeAnimationSharingState InState) {
}

void AMonsterCharacterBase::SetActiveAttackSkill(USkill* SkillToActivate) {
}

void AMonsterCharacterBase::RetreatMonster() {
}

void AMonsterCharacterBase::RespawnMonsterAfterDeath_Implementation() {
}

void AMonsterCharacterBase::RemoveMonsterFromMapSystem() {
}

void AMonsterCharacterBase::RemoveHealthBar() {
}

void AMonsterCharacterBase::RegisterMonsterToMapSystem() {
}

void AMonsterCharacterBase::PlaySpawnAnimations() {
}

void AMonsterCharacterBase::OnRep_ReplSuppression() {
}

void AMonsterCharacterBase::OnRep_ReplicatedFlags(uint16 OldFlags) {
}

void AMonsterCharacterBase::OnRep_MonsterBuffs() {
}





void AMonsterCharacterBase::NotifyFinishSpawning_Implementation() {
}


void AMonsterCharacterBase::NotifyDeath_Implementation(bool bAllowBeginNotify) {
}

void AMonsterCharacterBase::NetMulticast_ReturnedToPool_Implementation() {
}

void AMonsterCharacterBase::NetMulticast_ReleasedFromPool_Implementation(const FTransform& Transform) {
}

void AMonsterCharacterBase::MeleeTimerTick() {
}


FMonsterSettings AMonsterCharacterBase::K2_GetMonsterDetails() const {
    return FMonsterSettings{};
}


bool AMonsterCharacterBase::K2_CanRespawn_Implementation() const {
    return false;
}


bool AMonsterCharacterBase::IsTicksDisabled() const {
    return false;
}

bool AMonsterCharacterBase::IsTauntable() const {
    return false;
}

bool AMonsterCharacterBase::IsRunningAI() const {
    return false;
}

bool AMonsterCharacterBase::IsRenderPassDisabled() const {
    return false;
}

bool AMonsterCharacterBase::IsPlayingMontage() const {
    return false;
}

bool AMonsterCharacterBase::IsPatrolMonster() const {
    return false;
}

bool AMonsterCharacterBase::IsIdleOptimized() const {
    return false;
}

bool AMonsterCharacterBase::IsHolographicMaterial() const {
    return false;
}

bool AMonsterCharacterBase::IsDebugging() const {
    return false;
}

bool AMonsterCharacterBase::IsAnimSharing() const {
    return false;
}

void AMonsterCharacterBase::IdleOptimizeCheck_Implementation() {
}


bool AMonsterCharacterBase::HasDisabledFloorChecks() const {
    return false;
}

void AMonsterCharacterBase::HandleMonsterDamaged(AActor* DamagedMonster, const FDamage& DamageInfo) {
}

void AMonsterCharacterBase::HandleBuffApplied(USolsticeBuffBase* AppliedBuff, EBuffChangedOperation ChangeType) {
}

EEnemyThreatLevel AMonsterCharacterBase::GetThreatLevelEnum() const {
    return EEnemyThreatLevel::VeryLow;
}

EMonsterSpawnType AMonsterCharacterBase::GetSpawnType() const {
    return EMonsterSpawnType::Instant;
}

USkill* AMonsterCharacterBase::GetSkill(const FGameplayTag& SkillTag) const {
    return NULL;
}

bool AMonsterCharacterBase::GetReturnToInnerRadiusWhenAtOuterRadius() const {
    return false;
}

USkill* AMonsterCharacterBase::GetRandomSkillWeighted() {
    return NULL;
}

FGameplayTagContainer AMonsterCharacterBase::GetQueryTags() const {
    return FGameplayTagContainer{};
}

float AMonsterCharacterBase::GetPlayerSpeedForCloserAttack() const {
    return 0.0f;
}

float AMonsterCharacterBase::GetPatrolOuterRadius() const {
    return 0.0f;
}

float AMonsterCharacterBase::GetPatrolInnerRadius() const {
    return 0.0f;
}

float AMonsterCharacterBase::GetPatrolIgnoreTraceRadius() const {
    return 0.0f;
}

void AMonsterCharacterBase::GetOuterMeleeBoxWorldLocation(FVector& OutLocation, FVector& OutExtents, FRotator& OutRotation) const {
}

EMonsterType AMonsterCharacterBase::GetMonsterType() const {
    return EMonsterType::Standard;
}

EMonsterSizeClass AMonsterCharacterBase::GetMonsterSize() const {
    return EMonsterSizeClass::Tiny;
}

FText AMonsterCharacterBase::GetMonsterName() const {
    return FText::GetEmpty();
}

float AMonsterCharacterBase::GetMonsterKillXP() const {
    return 0.0f;
}

float AMonsterCharacterBase::GetMonsterKillDestroyTime() const {
    return 0.0f;
}

AMonsterControllerBase* AMonsterCharacterBase::GetMonsterController() const {
    return NULL;
}

TMap<EAttribute, FSolsticeAttributeData> AMonsterCharacterBase::GetMonsterAttributes() const {
    return TMap<EAttribute, FSolsticeAttributeData>();
}

UMonsterMeleeSkillBase* AMonsterCharacterBase::GetMeleeSkill() const {
    return NULL;
}

float AMonsterCharacterBase::GetMeleePlayRate() const {
    return 0.0f;
}

float AMonsterCharacterBase::GetMeleeAttackMovementDistance() const {
    return 0.0f;
}

TMap<TSubclassOf<USolsticeBuffBase>, float> AMonsterCharacterBase::GetMeleeAilments() const {
    return TMap<TSubclassOf<USolsticeBuffBase>, float>();
}

float AMonsterCharacterBase::GetMaxMeleeRange() const {
    return 0.0f;
}

FGameplayTag AMonsterCharacterBase::GetKilledTag() const {
    return FGameplayTag{};
}

void AMonsterCharacterBase::GetInnerMeleeBoxWorldLocation(FVector& OutLocation, FVector& OutExtents, FRotator& OutRotation) const {
}

float AMonsterCharacterBase::GetHealthWidgetTimeOut() const {
    return 0.0f;
}

AActor* AMonsterCharacterBase::GetGoalActor() const {
    return NULL;
}

FGameplayTag AMonsterCharacterBase::GetExecutionTag() const {
    return FGameplayTag{};
}

float AMonsterCharacterBase::GetExecutionRange() const {
    return 0.0f;
}

float AMonsterCharacterBase::GetEvadeChance() const {
    return 0.0f;
}

TSubclassOf<USolsticeBuffBase> AMonsterCharacterBase::GetEvadeBuff() const {
    return NULL;
}

FGameplayTag AMonsterCharacterBase::GetCapturedTag() const {
    return FGameplayTag{};
}

FGameplayTag AMonsterCharacterBase::GetCampaignUnlockTag() const {
    return FGameplayTag{};
}

void AMonsterCharacterBase::GetBurrowBoxWorldLocation(FVector& OutLocation, FVector& OutExtents, FRotator& OutRotation) const {
}

AActor* AMonsterCharacterBase::GetAttackTarget() const {
    return NULL;
}

USkill* AMonsterCharacterBase::GetActiveAttackSkill() {
    return NULL;
}




bool AMonsterCharacterBase::DoesExecutePlayer() const {
    return false;
}

bool AMonsterCharacterBase::DoesEvadeAfterAttack() const {
    return false;
}

void AMonsterCharacterBase::DiscoverHealthbars(AController* InController, EIndicatorType IndicatorType) {
}

void AMonsterCharacterBase::DisableFloorChecks(bool bDisable) {
}

void AMonsterCharacterBase::DestroyMonster() {
}

void AMonsterCharacterBase::DamageMaterialChange(float MaxBlood) {
}

void AMonsterCharacterBase::CreateHealthBar() {
}

void AMonsterCharacterBase::Client_ClearMonsterHighlight_Implementation() {
}

void AMonsterCharacterBase::ClearRetreat() {
}

void AMonsterCharacterBase::ClearMonsterHighlight() {
}

void AMonsterCharacterBase::ClearAttackTarget() {
}

bool AMonsterCharacterBase::CanRespawn() const {
    return false;
}

bool AMonsterCharacterBase::CanReloadAndHasClips() const {
    return false;
}

bool AMonsterCharacterBase::CanAttackDoors() const {
    return false;
}


void AMonsterCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMonsterCharacterBase, AnimState);
    DOREPLIFETIME(AMonsterCharacterBase, MonsterBuffs);
    DOREPLIFETIME(AMonsterCharacterBase, ReplicatedFlags);
    DOREPLIFETIME(AMonsterCharacterBase, ReplSuppression);
}


