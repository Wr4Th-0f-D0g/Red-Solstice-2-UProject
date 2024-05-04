#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ActivationParameters.h"
#include "ActivationAutofire.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationAutofire : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivationParameters ActivationParameters;
    
    UActivationAutofire();

};

