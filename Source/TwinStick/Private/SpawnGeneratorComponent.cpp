#include "SpawnGeneratorComponent.h"
#include "Net/UnrealNetwork.h"

USpawnGeneratorComponent::USpawnGeneratorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaveGenerationDataAsset = NULL;
}

void USpawnGeneratorComponent::Static_GenerateFromDeploymentData(UDataTable* InDataTable, FRandomStream& RandomStream, FGeneratedWaveInfo& OutWaveInfo, TArray<FSpawnSystemWaveInfo>& OutDeploymentWaveInfo, TArray<FSpawnSystemWave>& OutGeneratedWaves) {
}

void USpawnGeneratorComponent::OnRep_GeneratedSpawnInfo() {
}

bool USpawnGeneratorComponent::IsPeakWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum) {
    return false;
}

TArray<int32> USpawnGeneratorComponent::GetWavePointValues(const FGeneratedWaveInfo& InGeneratedInfo) {
    return TArray<int32>();
}

float USpawnGeneratorComponent::GetWavePointValue(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveIndex) {
    return 0.0f;
}

FGeneratedWaveInfo USpawnGeneratorComponent::GetWaveInfoDeploymentTest(const FGeneratedSpawnInfo& InWaveInfo) {
    return FGeneratedWaveInfo{};
}

FGeneratedWaveInfo USpawnGeneratorComponent::GetWaveInfo() const {
    return FGeneratedWaveInfo{};
}

float USpawnGeneratorComponent::GetWaveBarPercentage(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum) {
    return 0.0f;
}

int32 USpawnGeneratorComponent::GetTotalWaves(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0;
}

int32 USpawnGeneratorComponent::GetTotalBasePoints(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0;
}

int32 USpawnGeneratorComponent::GetSeedUsed(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0;
}

TArray<FGeneratedWaveTypeValue> USpawnGeneratorComponent::GetRollValuesForWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum) {
    return TArray<FGeneratedWaveTypeValue>();
}

float USpawnGeneratorComponent::GetPlayerModifierMultiplier(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0.0f;
}

EMonsterType USpawnGeneratorComponent::GetPeakingMonsterType(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum) {
    return EMonsterType::Standard;
}

FGameplayTagContainer USpawnGeneratorComponent::GetMonstersThatAreSpawning(const FGeneratedWaveInfo& InGeneratedInfo) {
    return FGameplayTagContainer{};
}

TArray<FGeneratedWaveMonsterItem> USpawnGeneratorComponent::GetMonstersSpawningForWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum) {
    return TArray<FGeneratedWaveMonsterItem>();
}

float USpawnGeneratorComponent::GetInfestationModifier(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0.0f;
}

int32 USpawnGeneratorComponent::GetInfestationLevel(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0;
}

int32 USpawnGeneratorComponent::GetHighestWavePointValue(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0;
}

TArray<FGeneratedWave> USpawnGeneratorComponent::GetGeneratedWavesArray(const FGeneratedWaveInfo& InGeneratedInfo) {
    return TArray<FGeneratedWave>();
}

FGeneratedWave USpawnGeneratorComponent::GetGeneratedWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNumber) {
    return FGeneratedWave{};
}

EDifficulty USpawnGeneratorComponent::GetDifficulty(const FGeneratedWaveInfo& InGeneratedInfo) {
    return EDifficulty::None;
}

int32 USpawnGeneratorComponent::GetCurrentDay(const FGeneratedWaveInfo& InGeneratedInfo) {
    return 0;
}

TArray<FGeneratedWaveTypeValue> USpawnGeneratorComponent::GetBasePointsArray(const FGeneratedWaveInfo& InGeneratedInfo) {
    return TArray<FGeneratedWaveTypeValue>();
}

void USpawnGeneratorComponent::GenerateSpawnData(const UObject* WorldContext, const FSpawnGeneratorParams& GeneratorParams) {
}

void USpawnGeneratorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnGeneratorComponent, GeneratedSpawnInfo);
}


