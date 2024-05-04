#pragma once
#include "CoreMinimal.h"
#include "AIMarineCharacterDataSkillLevel.h"
#include "PowerSuitModel.h"
#include "SavedModule.h"
#include "AIMarineCharacterData.generated.h"

class APrimaryWeaponBase;
class ASecondaryWeaponBase;
class USkill;

USTRUCT(BlueprintType)
struct FAIMarineCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerSuitModel PowerSuitModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APrimaryWeaponBase>> PrimaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASecondaryWeaponBase>> SecondaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> SkillClassesMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> SkillClassesUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIMarineCharacterDataSkillLevel> SkillLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedModule> EquippedModules;
    
    TWINSTICK_API FAIMarineCharacterData();
};

