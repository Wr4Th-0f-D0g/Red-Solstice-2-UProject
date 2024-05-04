#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BiomassMonsterSpawnParams.h"
#include "BiomassRadiusChangedDelegate.h"
#include "Damage.h"
#include "DestructibleActorBase.h"
#include "EBuffChangedOperation.h"
#include "EDifficulty.h"
#include "LocalMarkerPointsInterface.h"
#include "MonsterSpawnLocationGenerator.h"
#include "Templates/SubclassOf.h"
#include "BiomassCenterActor.generated.h"

class AActor;
class ABiomassCenterActor;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class UBiomassSpawnLocationGenerator;
class UDamageComponent;
class UFMODEvent;
class UMaterialInterface;
class UNavigationQueryFilter;
class UParticleSystem;
class USolsticeBuffBase;
class USplineComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class TWINSTICK_API ABiomassCenterActor : public ADestructibleActorBase, public ILocalMarkerPointsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> MissionLocationPoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlueprintUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusLastUpdate;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassRadiusChanged BiomassRadiusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusIncreasePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusIncreasePerSecRapid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeriodicRapidRadiusIncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeriodicRapidRadiusIncreaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumRadiusChangeToReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DivisionQueryFilterUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivisionUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LMANoSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverDivide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenCenterDivisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOnSpawnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOnSpawnFailLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpawnFailsBeforeLongWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOnDivideFailSurroundedTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadiusToStartDividing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusPercentToSpawnAtMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusPercentToSpawnAtMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumSurroundingForDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABiomassCenterActor> DivisionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, float> RandomSpawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedActors, meta=(AllowPrivateAccess=true))
    TArray<ABiomassCenterActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiomassSpawnLocationGenerator* BiomassSpawnLocationGenerator;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ChildConnectionStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildConnectionMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildConnectionMeshWobbleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildConnectionMeshSegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildConnectionMeshSegmentLengthRandomnessMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildConnectionMeshSegmentLengthRandomnessMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChildConnectionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionInitialDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionCurveMaxZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnburrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> ChildConnectionQueryFilterUsed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ABiomassCenterActor*, USplineComponent*> SplineMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USplineComponent*, float> SplineMeshesBurrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USplineComponent*, float> SplineMeshesUnburrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugReductionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToMaxFullHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealthStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChildHealthStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthIncreasePerStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthIncreasePerParentStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* HealthIncreaseBuffInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* HealthIncreaseChildBuffInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumHealthStacks, meta=(AllowPrivateAccess=true))
    int32 NumHealthStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumChildrenHealthStacks, meta=(AllowPrivateAccess=true))
    int32 NumChildrenHealthStacks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDestroyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BiomassKilled, meta=(AllowPrivateAccess=true))
    bool bBiomassKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFreezeOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFreezeOnReduce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealingRadiusPerSec;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> SpawnNavQueryFilterUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenIdleCycles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenWavesMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenWavesMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveTimeDecreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveTimeIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AdditionalPlayerTimeDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveMaxRandomVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseNumMonstersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalMonstersPerHeroOnBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonstersPerSpawnMaxVariancePositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonstersPerSpawnMaxVarianceNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLiveMonstersBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLiveMonstersBasePerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentMonstersToTargetIsolated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentMonstersToTargetIsolatedRandVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassRadiusReductionOnMonsterSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomassMonsterSpawnParams> MonsterTypesToSpawn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMonsterSpawnLocationGenerator SpawnsGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterSpawnUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnMonstersOnlyInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPatrolMonsters;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest QueryIsolatedPlayerRequest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest QueryRestOfPlayersRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenSpawnCyclesActual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> SpawnedMonsters;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnGrabberTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnGrabberFailRetryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GrabberTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, int32> MaxGrabbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, int32> MaxTotalGrabbers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> SpawnedGrabbers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPointsPerTentacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTentacleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTentacleFailRetryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddDespawnedTentacleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnedTentacleSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TentacleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalTentacleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, int32> MaxTentacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleDespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleMaxSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleMinSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMarineSpeedConsidered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentaclesHighestUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleInsideRangeTestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumTentaclesRespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenDamageTentacleSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleSpawnMaxRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> SpawnedTentacles;
    
public:
    ABiomassCenterActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocalHealthBuff();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateHPTentacleSpawn();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDespawnedTentacles();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateChildRelatedHealthStacks();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChildRelatedHealthBuff();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPeriodicRapidExpansion();
    
private:
    UFUNCTION(BlueprintCallable)
    void TentacleCheckMarineDistance();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopRapidExpansion();
    
    UFUNCTION(BlueprintCallable)
    void StartRapidExpansion(float InRapidExpansionTime, bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    ASolsticeCharacterBase* SpawnMonsterAtValidLocation(FGameplayTag InMonsterType);
    
private:
    UFUNCTION(BlueprintCallable)
    void SpawnMonster();
    
    UFUNCTION(BlueprintCallable)
    void SpawnAvailableMonstersThisTick();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDestroyedAndFading();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBiomassCenterRadiusMax(float InRadiusMax);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleAddDespawnedTentacle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReduceByArea();
    
    UFUNCTION(BlueprintCallable)
    void RadiusUpdateTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumHealthStacks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumChildrenHealthStacks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BiomassKilled();
    
private:
    UFUNCTION(BlueprintCallable)
    void MonsterSpawnUpdateTriggered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillBiomassCenter();
    
    UFUNCTION(BlueprintCallable)
    void InitHealthIncrease();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseLocalHealthStacks();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTentacleKilled(AActor* InKilledTentacle, const FDamage& InDamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleMonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleGrabberKilled(AActor* InKilledGrabber, const FDamage& InDamageInfo, bool bRecentlyDied);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDamageFreezeTimerEnded();
    
    UFUNCTION(BlueprintCallable)
    void HandleChildKilled(ABiomassCenterActor* InChildKilled);
    
    UFUNCTION(BlueprintCallable)
    void HandleChildActorKilledGeneralFunctionCall(AActor* InKilledActor, const FDamage& InDamageInfo, bool bRecentlyKilled);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleBuffChanged(USolsticeBuffBase* InChangedBuff, EBuffChangedOperation InChangeOperation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetWaveTargetActor();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersOnBiomass(TArray<ASolsticeCharacterBase*>& OutPlayersOnBiomass, bool bInReturnOnlyLiving);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSpawnedMonsters();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayersOnBiomass(bool bInReturnOnlyLiving);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumHealthStacks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth();
    
    UFUNCTION(BlueprintCallable)
    void GetDescendantsRecursive(TArray<ABiomassCenterActor*>& OutChildren);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABiomassCenterActor*> GetChildren();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildRelatedHealthStacks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChildRadiusMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCenterAggroPercentValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBiomassCenterRadiusMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBiomassCenterRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorFloorLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceUpdateHealth();
    
    UFUNCTION(BlueprintCallable)
    void DrawChildRelationships();
    
public:
    UFUNCTION(BlueprintCallable)
    void DivisionUpdateTriggered();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMe();
    
private:
    UFUNCTION(BlueprintCallable)
    void DespawnTooFarTentacles();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugGenerateTexture();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawRange();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawGridPartial();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawGridAbs();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawCoverage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdateTriggered();
    
    UFUNCTION(BlueprintCallable)
    void AddSplineToActor(AActor* InActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddDespawnedTentacle();
    

    // Fix for true pure virtual functions not being implemented
};

