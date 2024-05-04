#pragma once
#include "CoreMinimal.h"
#include "BotSkillTree.h"
#include "PowerSuit.h"
#include "SavedModule.h"
#include "BotData.generated.h"

class APrimaryWeaponBase;
class ASecondaryWeaponBase;
class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FBotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotSkillTree SkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerSuit PowerSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedModule> DefaultLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APrimaryWeaponBase> DefaultPrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASecondaryWeaponBase> DefaultSecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USolsticeBuffBase> CustomBotBuff;
    
    TWINSTICK_API FBotData();
};

