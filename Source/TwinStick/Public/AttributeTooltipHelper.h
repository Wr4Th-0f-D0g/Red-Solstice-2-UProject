#pragma once
#include "CoreMinimal.h"
#include "AttributeTooltipRowData.h"
#include "AttributeTooltipHelper.generated.h"

USTRUCT(BlueprintType)
struct FAttributeTooltipHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttributeTooltipRowData> RowData;
    
    TWINSTICK_API FAttributeTooltipHelper();
};

