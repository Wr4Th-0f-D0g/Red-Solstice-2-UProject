#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ActivationParameters.h"
#include "ActivationAreaEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationAreaEffect : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivationParameters ActivationParameters;
    
    UActivationAreaEffect();

};

