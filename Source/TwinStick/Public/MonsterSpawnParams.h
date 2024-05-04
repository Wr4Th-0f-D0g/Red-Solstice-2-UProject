#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MonsterSpawnParams.generated.h"

class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct FMonsterSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMonsterCharacterBase> MonsterToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    TWINSTICK_API FMonsterSpawnParams();
};

