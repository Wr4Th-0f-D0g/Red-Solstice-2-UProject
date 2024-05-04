#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponUpgradeData.h"
#include "WeaponFireComponentModification.generated.h"

USTRUCT(BlueprintType)
struct FWeaponFireComponentModification : public FWeaponUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FireComponentDataHandle;
    
    TWINSTICK_API FWeaponFireComponentModification();
};

