#pragma once
#include "CoreMinimal.h"
#include "WeaponUpgradeData.h"
#include "WeaponAmmoModification.generated.h"

class UHitObjectBase;

USTRUCT(BlueprintType)
struct FWeaponAmmoModification : public FWeaponUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHitObjectBase> AdvancedAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalEnergyPerShot;
    
    TWINSTICK_API FWeaponAmmoModification();
};

