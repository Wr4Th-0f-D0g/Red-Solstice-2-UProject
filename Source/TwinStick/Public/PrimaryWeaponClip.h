#pragma once
#include "CoreMinimal.h"
#include "WeaponClip.h"
#include "PrimaryWeaponClip.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryWeaponClip : public FWeaponClip {
    GENERATED_BODY()
public:
    TWINSTICK_API FPrimaryWeaponClip();
};

