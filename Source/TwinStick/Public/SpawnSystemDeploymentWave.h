#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EWaveSpawningType.h"
#include "MonsterGroupNumber.h"
#include "SpawnSystemDeploymentWave.generated.h"

USTRUCT(BlueprintType)
struct FSpawnSystemDeploymentWave : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonsterGroupNumber> MonsterGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveSpawningType WaveSpawningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstantWaveSpawnFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextWaveTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextWaveMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreNextWaveMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanWaveAdvanceWithTrigger;
    
    TWINSTICK_API FSpawnSystemDeploymentWave();
};

