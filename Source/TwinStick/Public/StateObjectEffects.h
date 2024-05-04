#pragma once
#include "CoreMinimal.h"
#include "StateObjectEffects.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FStateObjectEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OnEnterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ActiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OnExitEffect;
    
    TWINSTICK_API FStateObjectEffects();
};

