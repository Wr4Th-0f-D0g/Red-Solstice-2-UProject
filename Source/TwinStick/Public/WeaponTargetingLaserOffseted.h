#pragma once
#include "CoreMinimal.h"
#include "WeaponTargetingBase.h"
#include "WeaponTargetingLaserOffseted.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponTargetingLaserOffseted : public UWeaponTargetingBase {
    GENERATED_BODY()
public:
    UWeaponTargetingLaserOffseted(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AdjustEndPoint();
    
};

