#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavedDataTableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "SaveGameWeaponData.generated.h"

class ASolsticeWeaponBase;

USTRUCT(BlueprintType)
struct FSaveGameWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedDataTableRowHandle SecondaryFireComponentRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedDataTableRowHandle SecondaryFireComponentAdvancedAmmoHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSavedDataTableRowHandle> WeaponSpecializationHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSavedDataTableRowHandle> WeaponUpgradeHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector SecondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SkinIndex;
    
    TWINSTICK_API FSaveGameWeaponData();
};

