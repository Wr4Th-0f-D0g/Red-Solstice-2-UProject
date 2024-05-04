#pragma once
#include "CoreMinimal.h"
#include "EAmmoType.h"
#include "WeaponClip.generated.h"

USTRUCT(BlueprintType)
struct FWeaponClip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EAmmoType AmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MaxAmmoClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 ShotsPerClip;
    
    TWINSTICK_API FWeaponClip();
};

