#pragma once
#include "CoreMinimal.h"
#include "EWaveSpawningType.h"
#include "SpawnGroupInfo.h"
#include "SpawnSystemWaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnSystemWaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FSpawnGroupInfo> SpawnGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EWaveSpawningType WaveSpawningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextWaveMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextWaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float WaveSpawnFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float WaveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bIgnoreMonsterWaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bCanWaveAdvanceWithTrigger;
    
    TWINSTICK_API FSpawnSystemWaveInfo();
};

