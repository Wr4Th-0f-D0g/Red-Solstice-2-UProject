#pragma once
#include "CoreMinimal.h"
#include "WeaponSkill.h"
#include "WeaponSkillSmartGun.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponSkillSmartGun : public UWeaponSkill {
    GENERATED_BODY()
public:
    UWeaponSkillSmartGun(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDamageForHitComponent(USceneComponent* InHitComponent) const;
    
};

