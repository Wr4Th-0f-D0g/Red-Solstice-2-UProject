#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ActivationParameters.h"
#include "ActivationInstantOnRelease.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationInstantOnRelease : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivationParameters ActivationParameters;
    
    UActivationInstantOnRelease();

};

