#pragma once
#include "CoreMinimal.h"
#include "MonsterSpawnType.h"
#include "MonsterGroup.generated.h"

USTRUCT(BlueprintType)
struct FMonsterGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSpawnType> SpawnTypes;
    
    TWINSTICK_API FMonsterGroup();
};

