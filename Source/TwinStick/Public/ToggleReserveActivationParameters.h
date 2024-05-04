#pragma once
#include "CoreMinimal.h"
#include "ActivationParameters.h"
#include "ESkillToggleMode.h"
#include "ToggleReserveActivationParameters.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FToggleReserveActivationParameters : public FActivationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillToggleMode ToggleMode;
    
    FToggleReserveActivationParameters();
};

