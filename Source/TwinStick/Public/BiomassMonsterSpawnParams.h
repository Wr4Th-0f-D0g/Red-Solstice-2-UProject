#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BiomassMonsterSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FBiomassMonsterSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MonsterToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    TWINSTICK_API FBiomassMonsterSpawnParams();
};

