#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomBotOverrideData.generated.h"

class APrimaryWeaponBase;
class ASecondaryWeaponBase;
class USkill;

USTRUCT(BlueprintType)
struct FCustomBotOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> MainSkillOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> UtilitySkillOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APrimaryWeaponBase> PrimaryWeaponOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASecondaryWeaponBase> SecondaryWeaponOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddedTags;
    
    TWINSTICK_API FCustomBotOverrideData();
};

