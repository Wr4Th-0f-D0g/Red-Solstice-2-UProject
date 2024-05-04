#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ChargedActivationParameters.h"
#include "ActivationCharged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationCharged : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargedActivationParameters ActivationParameters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCharge;
    
public:
    UActivationCharged();

};

