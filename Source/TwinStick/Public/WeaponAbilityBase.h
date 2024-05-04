#pragma once
#include "CoreMinimal.h"
#include "AbilityBase.h"
#include "WeaponAbilityBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponAbilityBase : public UAbilityBase {
    GENERATED_BODY()
public:
    UWeaponAbilityBase(const FObjectInitializer& ObjectInitializer);

};

