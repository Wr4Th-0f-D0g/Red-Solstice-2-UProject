#include "SpawnManager.h"
#include "Net/UnrealNetwork.h"
#include "SpawnSettings_Deployment.h"
#include "Templates/SubclassOf.h"

USpawnManager::USpawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIDirector = NULL;
    this->bAISpawnsDisabled = false;
    this->CurrentWaveTotalSpawned = 0;
    this->bDebugMonsterSpawns = false;
    this->LineTraceDebugType = ESolsticeDebugTraceType::Duration;
    this->LineTraceDebugTime = 2.00f;
    this->bUsePoolManager = false;
    this->bSpawnerSystemActive = false;
    this->bUseWaveGenerationData = false;
    this->SpawnSystemInitialDelay = 1.00f;
    this->SpawnSettings = CreateDefaultSubobject<USpawnSettings_Deployment>(TEXT("SpawnSettings_Deployment"));
    this->MonsterManager = NULL;
    this->TutorialDeploymentTableOverride = NULL;
    this->MaxMonstersOnMap = 150;
    this->CurrentSpawnedMonsters = 0;
    this->CurrentWaveNumber = 0;
    this->OldWaveNumber = -1;
    this->MonsterBuffTable = NULL;
}

void USpawnManager::ToggleAISpawnsDisabled(bool bEnable) {
}

AMonsterCharacterBase* USpawnManager::SpawnNestMonsterFromClass(TSubclassOf<AMonsterCharacterBase> ClassToSpawn, FTransform AITransform, FVector& NestLocation) {
    return NULL;
}

AMonsterCharacterBase* USpawnManager::SpawnMonsterFromTag(FMonsterTag MonsterTag, FTransform Transform, FEnemySpawnArgs SpawnArgs, FGameplayTagContainer SpawnTags) {
    return NULL;
}

AMonsterCharacterBase* USpawnManager::SpawnMonsterFromClass(TSubclassOf<AMonsterCharacterBase> ClassToSpawn, FTransform AITransform, FEnemySpawnArgs SpawnArgs, EEnemyThreatLevel ThreatLevel) {
    return NULL;
}

AAIMarineHeroCharacterBase* USpawnManager::SpawnFollowerBotByTag(FFollowerTag FollowerTag, FTransform AITransform, FEnemySpawnArgs SpawnArgs) {
    return NULL;
}

AAIMarineHeroCharacterBase* USpawnManager::SpawnEnemyMarine(FEnemyMarineTag EnemyMarineTag, FTransform AITransform, FEnemySpawnArgs SpawnArgs, FGameplayTagContainer TagsToApply) {
    return NULL;
}

ABasicSolsticeAI* USpawnManager::SpawnBasicMarine(TSubclassOf<ABasicSolsticeAI> InClass, FTransform AITransform, FEnemySpawnArgs SpawnArgs, FGameplayTagContainer TagsToApply) {
    return NULL;
}

void USpawnManager::SkipWave() {
}

void USpawnManager::SetSpawnWaveTimeMultiplier(float NewSpawnWaveTimeMultiplier) {
}

void USpawnManager::SetSpawnSystemActive(bool bNewActive) {
}

void USpawnManager::RemoveMonsterBuff(FName RowName) {
}

void USpawnManager::PulseSpawners() {
}

void USpawnManager::OnRep_OldWaveNumber() {
}

void USpawnManager::OnRep_MonsterBuffs() {
}

void USpawnManager::OnRep_CurrentWaveNumber() {
}

void USpawnManager::NetMulticast_OverrunWaveIncreased_Implementation() {
}

void USpawnManager::NetMulticast_HighThreatMonsterSpawned_Implementation(AMonsterCharacterBase* Monster, ASpawnerBase* Spawner) {
}

void USpawnManager::NetMulticast_AllWaveMonstersKilled_Implementation(int32 WaveNumber) {
}

void USpawnManager::MonsterSpawned(AMonsterCharacterBase* Monster, FGameplayTag MonsterTag, const FEnemySpawnArgs& SpawnArgs) {
}

TArray<ASpawnerBase*> USpawnManager::K2_GetAllSpawners() const {
    return TArray<ASpawnerBase*>();
}

TArray<ASpawnerBase*> USpawnManager::K2_GetActiveSpawners() const {
    return TArray<ASpawnerBase*>();
}

bool USpawnManager::IsSpawnSystemActive() const {
    return false;
}

bool USpawnManager::IsOnLastWave() const {
    return false;
}

bool USpawnManager::IsLastWave() const {
    return false;
}

void USpawnManager::HandleTriggerSpawn(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USpawnManager::HandleMonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void USpawnManager::HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime) {
}

float USpawnManager::GetWaveStartTime() const {
    return 0.0f;
}

float USpawnManager::GetWaveRemainingTime() const {
    return 0.0f;
}

FSpawnSystemWave USpawnManager::GetWaveInfo(int32 WaveNumber) {
    return FSpawnSystemWave{};
}

float USpawnManager::GetWaveEndTime() const {
    return 0.0f;
}

float USpawnManager::GetWaveDuration() const {
    return 0.0f;
}

int32 USpawnManager::GetTotalNumberSpawnedMonstersForCurrentWave() const {
    return 0;
}

int32 USpawnManager::GetTotalNumberOfWaves() const {
    return 0;
}

int32 USpawnManager::GetNumberOfMonstersForCurrentWave() const {
    return 0;
}

int32 USpawnManager::GetCurrentWaveNumber() const {
    return 0;
}

void USpawnManager::AdvanceToWave(int32 WaveNum) {
}

void USpawnManager::AdjustCurrentWaveTimePercent(float ReductionPercentage) {
}

void USpawnManager::AdjustCurrentWaveTimeFlat(float FlatReduction) {
}

void USpawnManager::AddOrModifyMonsterBuff(FName RowName, int32 Stacks) {
}

void USpawnManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnManager, CurrentWaveTotalSpawned);
    DOREPLIFETIME(USpawnManager, SpawnSettings);
    DOREPLIFETIME(USpawnManager, CurrentSpawnedMonsters);
    DOREPLIFETIME(USpawnManager, CurrentWaveNumber);
    DOREPLIFETIME(USpawnManager, OldWaveNumber);
    DOREPLIFETIME(USpawnManager, MonsterBuffs);
}


