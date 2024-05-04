#pragma once
#include "CoreMinimal.h"
#include "ActionToAxisTranslationInfo.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FActionToAxisTranslationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FActionToAxisTranslationInfo();
};

