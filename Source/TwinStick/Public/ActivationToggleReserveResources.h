#pragma once
#include "CoreMinimal.h"
#include "ActivationBase.h"
#include "ToggleReserveActivationParameters.h"
#include "ActivationToggleReserveResources.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UActivationToggleReserveResources : public UActivationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleReserveActivationParameters ActivationParameters;
    
    UActivationToggleReserveResources();

};

