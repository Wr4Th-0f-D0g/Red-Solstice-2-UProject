#pragma once
#include "CoreMinimal.h"
#include "SolsticeWeaponBase.h"
#include "PrimaryWeaponBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API APrimaryWeaponBase : public ASolsticeWeaponBase {
    GENERATED_BODY()
public:
    APrimaryWeaponBase(const FObjectInitializer& ObjectInitializer);

};

