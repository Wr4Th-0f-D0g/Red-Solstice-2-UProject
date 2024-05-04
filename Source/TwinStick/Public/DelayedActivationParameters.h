#pragma once
#include "CoreMinimal.h"
#include "ActivationParameters.h"
#include "DelayedActivationParameters.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FDelayedActivationParameters : public FActivationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateOnMaxDelay;
    
    FDelayedActivationParameters();
};

