#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ToggleActivationParameters.h"
#include "ActivationToggle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationToggle : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleActivationParameters ActivationParameters;
    
    UActivationToggle();

};

