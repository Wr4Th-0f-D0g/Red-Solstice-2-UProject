#include "BiomassCenterActor.h"
#include "Components/SceneComponent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"

ABiomassCenterActor::ABiomassCenterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Tags.AddDefaulted(2);
    this->bDoNotRegisterStatic = true;
    this->BlueprintUpdateTimer = 0.10f;
    this->RadiusLastUpdate = -1.00f;
    this->RadiusMax = 0.00f;
    this->BodyRadius = 400.00f;
    this->RadiusIncreasePerSec = 0.00f;
    this->RadiusIncreasePerSecRapid = 0.00f;
    this->PeriodicRapidRadiusIncreaseTime = 0.00f;
    this->PeriodicRapidRadiusIncreaseDuration = 0.00f;
    this->MinimumRadiusChangeToReport = 50.00f;
    this->Radius = 0.00f;
    this->RadiusUpdateTimer = 0.25f;
    this->DivisionQueryFilterUsed = NULL;
    this->DivisionUpdateTimer = 1.00f;
    this->LMANoSpawnRadius = 500.00f;
    this->bCanEverDivide = true;
    this->TimeBetweenCenterDivisions = 0.00f;
    this->TimeOnSpawnFail = 0.00f;
    this->TimeOnSpawnFailLong = 30.00f;
    this->NumSpawnFailsBeforeLongWait = 10;
    this->TimeOnDivideFailSurroundedTest = 60.00f;
    this->MaxChildren = 0;
    this->MinRadiusToStartDividing = 0.00f;
    this->RadiusPercentToSpawnAtMax = 0.95f;
    this->RadiusPercentToSpawnAtMin = 0.75f;
    this->MaxNumSurroundingForDivision = 3;
    this->DivisionClass = NULL;
    this->BiomassSpawnLocationGenerator = NULL;
    this->ChildConnectionStaticMesh = NULL;
    this->BurrowSpeed = 0.20f;
    this->ChildConnectionMeshScale = 1.00f;
    this->ChildConnectionMeshWobbleDistance = 250.00f;
    this->ChildConnectionMeshSegmentLength = 200.00f;
    this->ChildConnectionMeshSegmentLengthRandomnessMin = -50.00f;
    this->ChildConnectionMeshSegmentLengthRandomnessMax = 50.00f;
    this->ChildConnectionMaterial = NULL;
    this->NodeZOffset = -15.00f;
    this->ConnectionInitialDepth = 50.00f;
    this->ConnectionCurveMaxZOffset = 400.00f;
    this->UnburrowSpeed = 50.00f;
    this->ChildConnectionQueryFilterUsed = NULL;
    this->DebugReductionAmount = 0.00f;
    this->bIsDrawDebugInfo = false;
    this->TimeToMaxFullHealth = 120.00f;
    this->MaxHealthStacks = 5;
    this->MaxChildHealthStacks = 115;
    this->HealthIncreasePerStack = 1250.00f;
    this->HealthIncreasePerParentStack = 416.00f;
    this->HealthIncreaseBuffInstance = NULL;
    this->HealthIncreaseChildBuffInstance = NULL;
    this->NumHealthStacks = 0;
    this->NumChildrenHealthStacks = 0;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->DeathSound = NULL;
    this->DeathParticle = NULL;
    this->TimeToDestroyActor = 180.00f;
    this->TimeToFade = 5.00f;
    this->bBiomassKilled = false;
    this->TimeToFreezeOnDamage = 0.00f;
    this->TimeToFreezeOnReduce = 0.00f;
    this->HealingRadiusPerSec = 0.00f;
    this->SpawnNavQueryFilterUsed = NULL;
    this->TimeBetweenIdleCycles = 2.00f;
    this->TimeBetweenWavesMax = 4.00f;
    this->TimeBetweenWavesMin = 2.00f;
    this->WaveTimeDecreaseBase = 0.20f;
    this->WaveTimeIncrease = 0.20f;
    this->AdditionalPlayerTimeDecrease.AddDefaulted(7);
    this->WaveMaxRandomVariation = 0.20f;
    this->MonsterSpawnTime = 0.10f;
    this->BaseNumMonstersToSpawn = 5;
    this->AdditionalMonstersPerHeroOnBiomass = 2;
    this->MonstersPerSpawnMaxVariancePositive = 0.20f;
    this->MonstersPerSpawnMaxVarianceNegative = 0.20f;
    this->MaxLiveMonstersBase = 20;
    this->MaxLiveMonstersBasePerPlayer = 1;
    this->PercentMonstersToTargetIsolated = 0.75f;
    this->PercentMonstersToTargetIsolatedRandVariance = 0.30f;
    this->BiomassRadiusReductionOnMonsterSpawn = 100.00f;
    this->MonsterSpawnUpdateTimer = 0.03f;
    this->bSpawnMonstersOnlyInRange = true;
    this->bSpawnPatrolMonsters = false;
    this->TimeBetweenSpawnCyclesActual = 0.00f;
    this->SpawnGrabberTime = 30.00f;
    this->SpawnGrabberFailRetryTime = 5.00f;
    this->HitPointsPerTentacle = 10000;
    this->SpawnTentacleTime = 30.00f;
    this->SpawnTentacleFailRetryTime = 3.00f;
    this->AddDespawnedTentacleTime = 2.00f;
    this->DespawnedTentacleSpawnTime = 0.50f;
    this->AdditionalTentacleDamage = 5000.00f;
    this->TentacleDespawnDistance = 2500.00f;
    this->TentacleMaxSpawnDistance = 1000.00f;
    this->TentacleMinSpawnDistance = 400.00f;
    this->MaxMarineSpeedConsidered = 800.00f;
    this->TentaclesHighestUpdateTime = 10.00f;
    this->TentacleInsideRangeTestTime = 1.00f;
    this->MaxNumTentaclesRespawned = 6;
    this->MinTimeBetweenDamageTentacleSpawns = 3.00f;
    this->TentacleSpawnMaxRadius = 2000.00f;
    this->DamageComponent->SetupAttachment(RootComponent);
}

void ABiomassCenterActor::UpdateLocalHealthBuff() {
}

void ABiomassCenterActor::UpdateHPTentacleSpawn() {
}

void ABiomassCenterActor::UpdateDespawnedTentacles() {
}

void ABiomassCenterActor::UpdateChildRelatedHealthStacks() {
}

void ABiomassCenterActor::UpdateChildRelatedHealthBuff() {
}

void ABiomassCenterActor::TriggerPeriodicRapidExpansion() {
}

void ABiomassCenterActor::TentacleCheckMarineDistance() {
}

void ABiomassCenterActor::StopRapidExpansion() {
}

void ABiomassCenterActor::StartRapidExpansion(float InRapidExpansionTime, bool bOverride) {
}

ASolsticeCharacterBase* ABiomassCenterActor::SpawnMonsterAtValidLocation(FGameplayTag InMonsterType) {
    return NULL;
}

void ABiomassCenterActor::SpawnMonster() {
}

void ABiomassCenterActor::SpawnAvailableMonstersThisTick() {
}

void ABiomassCenterActor::SetRadius(float NewRadius) {
}

void ABiomassCenterActor::SetDestroyedAndFading() {
}

void ABiomassCenterActor::SetBiomassCenterRadiusMax(float InRadiusMax) {
}

void ABiomassCenterActor::ScheduleAddDespawnedTentacle() {
}

void ABiomassCenterActor::ReduceByArea() {
}

void ABiomassCenterActor::RadiusUpdateTriggered() {
}

void ABiomassCenterActor::OnRep_SpawnedActors() {
}

void ABiomassCenterActor::OnRep_NumHealthStacks() {
}

void ABiomassCenterActor::OnRep_NumChildrenHealthStacks() {
}

void ABiomassCenterActor::OnRep_BiomassKilled() {
}

void ABiomassCenterActor::MonsterSpawnUpdateTriggered() {
}

void ABiomassCenterActor::KillBiomassCenter() {
}

void ABiomassCenterActor::InitHealthIncrease() {
}

void ABiomassCenterActor::IncreaseLocalHealthStacks() {
}

void ABiomassCenterActor::HandleTentacleKilled(AActor* InKilledTentacle, const FDamage& InDamageInfo, bool bRecentlyDied) {
}

void ABiomassCenterActor::HandleMonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ABiomassCenterActor::HandleGrabberKilled(AActor* InKilledGrabber, const FDamage& InDamageInfo, bool bRecentlyDied) {
}

void ABiomassCenterActor::HandleDamageFreezeTimerEnded() {
}

void ABiomassCenterActor::HandleChildKilled(ABiomassCenterActor* InChildKilled) {
}

void ABiomassCenterActor::HandleChildActorKilledGeneralFunctionCall(AActor* InKilledActor, const FDamage& InDamageInfo, bool bRecentlyKilled) {
}

void ABiomassCenterActor::HandleBuffChanged(USolsticeBuffBase* InChangedBuff, EBuffChangedOperation InChangeOperation) {
}

ASolsticeCharacterBase* ABiomassCenterActor::GetWaveTargetActor() {
    return NULL;
}

void ABiomassCenterActor::GetPlayersOnBiomass(TArray<ASolsticeCharacterBase*>& OutPlayersOnBiomass, bool bInReturnOnlyLiving) {
}

int32 ABiomassCenterActor::GetNumSpawnedMonsters() {
    return 0;
}

int32 ABiomassCenterActor::GetNumPlayersOnBiomass(bool bInReturnOnlyLiving) {
    return 0;
}

int32 ABiomassCenterActor::GetNumHealthStacks() {
    return 0;
}

float ABiomassCenterActor::GetHealth() {
    return 0.0f;
}

void ABiomassCenterActor::GetDescendantsRecursive(TArray<ABiomassCenterActor*>& OutChildren) {
}

TArray<ABiomassCenterActor*> ABiomassCenterActor::GetChildren() {
    return TArray<ABiomassCenterActor*>();
}

int32 ABiomassCenterActor::GetChildRelatedHealthStacks() {
    return 0;
}

float ABiomassCenterActor::GetChildRadiusMax() const {
    return 0.0f;
}

float ABiomassCenterActor::GetCenterAggroPercentValue() {
    return 0.0f;
}

float ABiomassCenterActor::GetBiomassCenterRadiusMax() const {
    return 0.0f;
}

float ABiomassCenterActor::GetBiomassCenterRadius() {
    return 0.0f;
}

FVector ABiomassCenterActor::GetActorFloorLocation() {
    return FVector{};
}

void ABiomassCenterActor::ForceUpdateHealth() {
}

void ABiomassCenterActor::DrawChildRelationships() {
}

void ABiomassCenterActor::DivisionUpdateTriggered() {
}

void ABiomassCenterActor::DestroyMe() {
}

void ABiomassCenterActor::DespawnTooFarTentacles() {
}

void ABiomassCenterActor::DebugGenerateTexture() {
}

void ABiomassCenterActor::DebugDrawRange() {
}

void ABiomassCenterActor::DebugDrawGridPartial() {
}

void ABiomassCenterActor::DebugDrawGridAbs() {
}

void ABiomassCenterActor::DebugDrawCoverage() {
}

void ABiomassCenterActor::BlueprintUpdateTriggered_Implementation() {
}

void ABiomassCenterActor::AddSplineToActor(AActor* InActor) {
}

void ABiomassCenterActor::AddDespawnedTentacle() {
}

void ABiomassCenterActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABiomassCenterActor, Radius);
    DOREPLIFETIME(ABiomassCenterActor, SpawnedActors);
    DOREPLIFETIME(ABiomassCenterActor, NumHealthStacks);
    DOREPLIFETIME(ABiomassCenterActor, NumChildrenHealthStacks);
    DOREPLIFETIME(ABiomassCenterActor, bBiomassKilled);
}


