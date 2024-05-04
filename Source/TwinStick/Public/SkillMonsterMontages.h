#pragma once
#include "CoreMinimal.h"
#include "SkillMonsterMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSkillMonsterMontages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
    TWINSTICK_API FSkillMonsterMontages();
};

