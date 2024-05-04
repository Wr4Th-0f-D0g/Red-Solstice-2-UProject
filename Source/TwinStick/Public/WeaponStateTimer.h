#pragma once
#include "CoreMinimal.h"
#include "EStateTransitionMode.h"
#include "WeaponStateTimer.generated.h"

USTRUCT(BlueprintType)
struct FWeaponStateTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTransitionMode StateTransitionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingDuration;
    
    TWINSTICK_API FWeaponStateTimer();
};

