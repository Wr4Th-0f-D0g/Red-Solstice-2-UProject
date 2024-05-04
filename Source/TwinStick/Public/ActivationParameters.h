#pragma once
#include "CoreMinimal.h"
#include "EActivationStatus.h"
#include "ActivationParameters.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FActivationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResourceRechargeAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceRechargeReactivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivationStatus EnterCooldownCondition;
    
    FActivationParameters();
};

