#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlockDecisionMonsterDataElement.generated.h"

class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct TWINSTICK_API FBlockDecisionMonsterDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMonsterCharacterBase> Monster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpawnDelay;
    
    FBlockDecisionMonsterDataElement();
};

