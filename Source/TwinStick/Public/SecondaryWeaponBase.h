#pragma once
#include "CoreMinimal.h"
#include "SolsticeWeaponBase.h"
#include "SecondaryWeaponBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ASecondaryWeaponBase : public ASolsticeWeaponBase {
    GENERATED_BODY()
public:
    ASecondaryWeaponBase(const FObjectInitializer& ObjectInitializer);

};

