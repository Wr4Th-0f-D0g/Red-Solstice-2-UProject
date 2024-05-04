#pragma once
#include "CoreMinimal.h"
#include "EWaveSpawningType.h"
#include "MonsterSettings.h"
#include "SpawnSystemWave.generated.h"

class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct FSpawnSystemWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSettings> MonstersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSettings> CachedMonstersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSettings> FillerMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveSpawningType WaveSpawningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveAdvanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelayAfterFinishingSpawningContant;
    
    UPROPERTY(EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AMonsterCharacterBase>> SpawnedMonstersForWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextWaveMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bFinishedSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bIgnoreWaveMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WaveNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanWaveAdvanceWithTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreMonsterWaveCount;
    
    TWINSTICK_API FSpawnSystemWave();
};

