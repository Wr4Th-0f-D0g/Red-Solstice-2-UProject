#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EquippedSkill.generated.h"

class USkill;

USTRUCT(BlueprintType)
struct FEquippedSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkill> SkillClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    TWINSTICK_API FEquippedSkill();
};

