#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.h"
#include "Templates/SubclassOf.h"
#include "SkillSlot.generated.h"

class USkill;

USTRUCT(BlueprintType)
struct FSkillSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillSlot SkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkill> SkillClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkill> Skill;
    
    TWINSTICK_API FSkillSlot();
};

