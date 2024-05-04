#pragma once
#include "CoreMinimal.h"
#include "WeaponStateBase.h"
#include "StateFire.generated.h"

class ASolsticeWeaponBase;

UCLASS(Blueprintable)
class TWINSTICK_API UStateFire : public UWeaponStateBase {
    GENERATED_BODY()
public:
    UStateFire();

    UFUNCTION(BlueprintCallable)
    void TransitionsToWindup(ASolsticeWeaponBase* Weapon);
    
};

