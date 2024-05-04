#pragma once
#include "CoreMinimal.h"
#include "ActivationParameters.h"
#include "ESkillToggleMode.h"
#include "ToggleActivationParameters.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FToggleActivationParameters : public FActivationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceDrainPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourcesReservedWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDeactivationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillToggleMode ToggleMode;
    
    FToggleActivationParameters();
};

