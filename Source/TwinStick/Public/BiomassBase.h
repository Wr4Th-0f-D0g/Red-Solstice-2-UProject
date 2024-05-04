#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Damage.h"
#include "MonsterSpawnParams.h"
#include "OnBiomassSpreadChangeDelegate.h"
#include "Templates/SubclassOf.h"
#include "BiomassBase.generated.h"

class AHeroCharacterBase;
class AMonsterCharacterBase;
class UMeshComponent;
class UNavigationQueryFilter;
class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ABiomassBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBiomassSpreadChange OnBiomassSpreadChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpreadColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BiomassLocation, meta=(AllowPrivateAccess=true))
    FVector BiomassLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BiomassRadius, meta=(AllowPrivateAccess=true))
    float BiomassRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LevelSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, int32> SpawnpointAdjustMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassSpreadTimerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassSpreadSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassSpreadMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassMaxValueBeforeSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadToSectorPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassSpreadMinRadiusMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomassRadiusSpawnCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInBiomassRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnyPlayerInBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSpawnParams> MonstersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> SpawnedMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMonsterWaveTimerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMonsterWaveTimerIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMonsterWaveTimerIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> BiomassMonsterSpawnFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMonsterWaveTimerIntervalChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMonsterTimerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSpawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnMonsterTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnMonsterWaveTimerHandle;
    
    ABiomassBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMaterialMutationRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMaterialMutationLocation();
    
    UFUNCTION(BlueprintCallable)
    void SpreadBiomass();
    
    UFUNCTION(BlueprintCallable)
    void SpawnMonsterWave();
    
    UFUNCTION(BlueprintCallable)
    void SpawnMonster();
    
    UFUNCTION(BlueprintCallable)
    void SetBiomassSpreadTimerInterval(float NewInterval);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BiomassRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BiomassLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnBiomass(const FVector Point);
    
    UFUNCTION(BlueprintCallable)
    void HandleMonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToLocalPlayerSquared();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToBiomassEdge(const FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToBiomassCenter(const FVector Point);
    
};

