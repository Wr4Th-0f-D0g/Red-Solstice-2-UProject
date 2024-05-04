#pragma once
#include "CoreMinimal.h"
#include "EAmmoType.h"
#include "WeaponClipDefaults.generated.h"

USTRUCT(BlueprintType)
struct FWeaponClipDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoType AmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmmoClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotsPerClip;
    
    TWINSTICK_API FWeaponClipDefaults();
};

