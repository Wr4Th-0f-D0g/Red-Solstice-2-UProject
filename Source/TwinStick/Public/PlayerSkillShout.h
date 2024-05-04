#pragma once
#include "CoreMinimal.h"
#include "PlayerShout.h"
#include "Templates/SubclassOf.h"
#include "PlayerSkillShout.generated.h"

class USkill;

USTRUCT(BlueprintType)
struct FPlayerSkillShout : public FPlayerShout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkill> SkillClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTimeRemaining;
    
    TWINSTICK_API FPlayerSkillShout();
};

