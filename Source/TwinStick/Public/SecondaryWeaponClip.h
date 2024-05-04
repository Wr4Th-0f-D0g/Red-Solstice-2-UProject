#pragma once
#include "CoreMinimal.h"
#include "WeaponClip.h"
#include "SecondaryWeaponClip.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryWeaponClip : public FWeaponClip {
    GENERATED_BODY()
public:
    TWINSTICK_API FSecondaryWeaponClip();
};

