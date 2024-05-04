#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PreSpawnedMonsters.generated.h"

class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct FPreSpawnedMonsters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMonsterCharacterBase> MonsterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    TWINSTICK_API FPreSpawnedMonsters();
};

