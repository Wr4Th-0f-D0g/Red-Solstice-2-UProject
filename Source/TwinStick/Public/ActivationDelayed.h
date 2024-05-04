#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "DelayedActivationParameters.h"
#include "ActivationDelayed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationDelayed : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayedActivationParameters ActivationParameters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDelay;
    
public:
    UActivationDelayed();

};

