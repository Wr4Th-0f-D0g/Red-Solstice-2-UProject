#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MonsterWave.generated.h"

class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct TWINSTICK_API FMonsterWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AMonsterCharacterBase>, int32> MonsterWaveInfo;
    
    FMonsterWave();
};

