#pragma once
#include "CoreMinimal.h"
#include "WeaponUpgradeData.h"
#include "WeaponSpecialization.generated.h"

class UWeaponSpecializationBase;

USTRUCT(BlueprintType)
struct FWeaponSpecialization : public FWeaponUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponSpecializationBase> WeaponSpecializationClass;
    
    TWINSTICK_API FWeaponSpecialization();
};

