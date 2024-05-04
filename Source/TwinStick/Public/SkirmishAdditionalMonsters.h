#pragma once
#include "CoreMinimal.h"
#include "MonsterSpawnTag.h"
#include "SkirmishAdditionalMonsters.generated.h"

USTRUCT(BlueprintType)
struct FSkirmishAdditionalMonsters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSpawnTag> Monsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveNumber;
    
    TWINSTICK_API FSkirmishAdditionalMonsters();
};

