#pragma once
#include "CoreMinimal.h"
#include "AbilityToolTipAspect.h"
#include "EAspectDisplayGroup.h"
#include "AbilityTooltipAspectGroup.generated.h"

USTRUCT(BlueprintType)
struct FAbilityTooltipAspectGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAspectDisplayGroup AspectGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GroupDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityToolTipAspect> Aspects;
    
    TWINSTICK_API FAbilityTooltipAspectGroup();
};

