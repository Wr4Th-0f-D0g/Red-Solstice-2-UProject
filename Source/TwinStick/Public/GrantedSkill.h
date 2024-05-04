#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GrantedSkill.generated.h"

class USkill;

USTRUCT(BlueprintType)
struct FGrantedSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USkill> SkillClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevelModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkillTag;
    
    TWINSTICK_API FGrantedSkill();
};

