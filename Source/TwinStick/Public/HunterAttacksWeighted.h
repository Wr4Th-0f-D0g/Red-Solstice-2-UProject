#pragma once
#include "CoreMinimal.h"
#include "EHunterAttack.h"
#include "HunterAttacksWeighted.generated.h"

USTRUCT(BlueprintType)
struct FHunterAttacksWeighted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterAttack Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    TWINSTICK_API FHunterAttacksWeighted();
};

