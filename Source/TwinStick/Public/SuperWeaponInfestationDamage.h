#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponInfestationDamage.generated.h"

class ARegion;

USTRUCT(BlueprintType)
struct FSuperWeaponInfestationDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> TargetRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EstimatedDamage;
    
    TWINSTICK_API FSuperWeaponInfestationDamage();
};

