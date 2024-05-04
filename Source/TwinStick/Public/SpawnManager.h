#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "EEnemyThreatLevel.h"
#include "ESolsticeDebugTraceType.h"
#include "EnemyMarineTag.h"
#include "EnemySpawnArgs.h"
#include "FollowerTag.h"
#include "MonsterTag.h"
#include "PlayerStatsPair.h"
#include "SimulatedBuff_ID.h"
#include "SpawnManagerHighThreatSpawnedDelegate.h"
#include "SpawnManagerMonsterSpawnedDelegate.h"
#include "SpawnManagerStartWaveDelegate.h"
#include "SpawnSystemWave.h"
#include "Templates/SubclassOf.h"
#include "SpawnManager.generated.h"

class AAIMarineHeroCharacterBase;
class AActor;
class ABasicSolsticeAI;
class AMonsterCharacterBase;
class ASpawnerBase;
class UAIDirector;
class UDataTable;
class UMonsterManager;
class UPrimitiveComponent;
class USpawnSettingsBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USpawnManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerStartWave OnOverrunWaveIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> NotifiedSpawned;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxAICap_Hard;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt EnemyMarineCap;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt CivilianCap;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt FriendlyMarineCap;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxMonsterSpawnSoftCapLowThreatAndUnder;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxMonsterCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIDirector* AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAISpawnsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentWaveTotalSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMonsterSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeDebugTraceType LineTraceDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LineTraceColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LineTraceColorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineTraceDebugTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePoolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnerSystemActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWaveGenerationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSystemInitialDelay;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerMonsterSpawned OnMonsterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerMonsterSpawned OnMonsterKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerHighThreatSpawned OnHighThreatMonsterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerStartWave OnWaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerStartWave OnWaveEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnManagerStartWave OnAllWaveMonstersKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASpawnerBase*> Spawners;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USpawnSettingsBase* SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMonsterManager* MonsterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialDeploymentTableOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMonstersOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentSpawnedMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentWaveNumber, meta=(AllowPrivateAccess=true))
    int32 CurrentWaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OldWaveNumber, meta=(AllowPrivateAccess=true))
    int32 OldWaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterBuffTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MonsterBuffs, meta=(AllowPrivateAccess=true))
    TArray<FSimulatedBuff_ID> MonsterBuffs;
    
    USpawnManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleAISpawnsDisabled(bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AMonsterCharacterBase* SpawnNestMonsterFromClass(TSubclassOf<AMonsterCharacterBase> ClassToSpawn, FTransform AITransform, UPARAM(Ref) FVector& NestLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AMonsterCharacterBase* SpawnMonsterFromTag(FMonsterTag MonsterTag, FTransform Transform, FEnemySpawnArgs SpawnArgs, FGameplayTagContainer SpawnTags);
    
    UFUNCTION(BlueprintCallable)
    AMonsterCharacterBase* SpawnMonsterFromClass(TSubclassOf<AMonsterCharacterBase> ClassToSpawn, FTransform AITransform, FEnemySpawnArgs SpawnArgs, EEnemyThreatLevel ThreatLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AAIMarineHeroCharacterBase* SpawnFollowerBotByTag(FFollowerTag FollowerTag, FTransform AITransform, FEnemySpawnArgs SpawnArgs);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AAIMarineHeroCharacterBase* SpawnEnemyMarine(FEnemyMarineTag EnemyMarineTag, FTransform AITransform, FEnemySpawnArgs SpawnArgs, FGameplayTagContainer TagsToApply);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ABasicSolsticeAI* SpawnBasicMarine(TSubclassOf<ABasicSolsticeAI> InClass, FTransform AITransform, FEnemySpawnArgs SpawnArgs, FGameplayTagContainer TagsToApply);
    
    UFUNCTION(BlueprintCallable)
    void SkipWave();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnWaveTimeMultiplier(float NewSpawnWaveTimeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnSystemActive(bool bNewActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMonsterBuff(FName RowName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PulseSpawners();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_OldWaveNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MonsterBuffs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWaveNumber();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OverrunWaveIncreased();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_HighThreatMonsterSpawned(AMonsterCharacterBase* Monster, ASpawnerBase* Spawner);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AllWaveMonstersKilled(int32 WaveNumber);
    
    UFUNCTION(BlueprintCallable)
    void MonsterSpawned(AMonsterCharacterBase* Monster, FGameplayTag MonsterTag, const FEnemySpawnArgs& SpawnArgs);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<ASpawnerBase*> K2_GetAllSpawners() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<ASpawnerBase*> K2_GetActiveSpawners() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnSystemActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnLastWave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastWave() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTriggerSpawn(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleMonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveRemainingTime() const;
    
    UFUNCTION(BlueprintCallable)
    FSpawnSystemWave GetWaveInfo(int32 WaveNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalNumberSpawnedMonstersForCurrentWave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalNumberOfWaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfMonstersForCurrentWave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWaveNumber() const;
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToWave(int32 WaveNum);
    
    UFUNCTION(BlueprintCallable)
    void AdjustCurrentWaveTimePercent(float ReductionPercentage);
    
    UFUNCTION(BlueprintCallable)
    void AdjustCurrentWaveTimeFlat(float FlatReduction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddOrModifyMonsterBuff(FName RowName, int32 Stacks);
    
};

