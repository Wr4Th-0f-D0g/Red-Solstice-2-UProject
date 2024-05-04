#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterWeaponData.h"
#include "SavedWeapon.generated.h"

USTRUCT(BlueprintType)
struct FSavedWeapon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData WeaponData;
    
    TWINSTICK_API FSavedWeapon();
};

