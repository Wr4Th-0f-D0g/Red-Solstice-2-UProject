#pragma once
#include "CoreMinimal.h"
#include "WeaponUpgradeData.h"
#include "WeaponUpgrade.generated.h"

class USolsticeBuffBase;
class UWeaponPassiveBuffBase;

USTRUCT(BlueprintType)
struct FWeaponUpgrade : public FWeaponUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponPassiveBuffBase> WeaponBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USolsticeBuffBase> CharacterBuffClass;
    
    TWINSTICK_API FWeaponUpgrade();
};

