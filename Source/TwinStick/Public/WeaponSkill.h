#pragma once
#include "CoreMinimal.h"
#include "MarineSkillBase.h"
#include "WeaponSkill.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponSkill : public UMarineSkillBase {
    GENERATED_BODY()
public:
    UWeaponSkill(const FObjectInitializer& ObjectInitializer);

};

