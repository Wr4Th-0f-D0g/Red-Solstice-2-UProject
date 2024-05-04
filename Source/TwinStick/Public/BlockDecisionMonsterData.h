#pragma once
#include "CoreMinimal.h"
#include "BlockDecisionMonsterDataElement.h"
#include "BlockDecisionMonsterData.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FBlockDecisionMonsterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlockDecisionMonsterDataElement> MonsterData;
    
    FBlockDecisionMonsterData();
};

