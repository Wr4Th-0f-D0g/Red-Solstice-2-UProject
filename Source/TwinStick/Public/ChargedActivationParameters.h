#pragma once
#include "CoreMinimal.h"
#include "ActivationParameters.h"
#include "ChargedActivationParameters.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FChargedActivationParameters : public FActivationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceDrainPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumChargeForActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateOnMaxCharge;
    
    FChargedActivationParameters();
};

