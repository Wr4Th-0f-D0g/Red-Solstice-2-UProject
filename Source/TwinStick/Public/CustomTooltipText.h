#pragma once
#include "CoreMinimal.h"
#include "CustomTooltipFormatting.h"
#include "CustomTooltipText.generated.h"

USTRUCT(BlueprintType)
struct FCustomTooltipText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomTooltipFormatting Formatting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCustomFormatting;
    
    TWINSTICK_API FCustomTooltipText();
};

