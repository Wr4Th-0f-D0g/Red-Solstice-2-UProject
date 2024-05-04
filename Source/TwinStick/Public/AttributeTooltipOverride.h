#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAspectDisplay.h"
#include "AttributeTooltipOverride.generated.h"

USTRUCT(BlueprintType)
struct FAttributeTooltipOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAspectDisplay DisplayAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NameOverride;
    
    TWINSTICK_API FAttributeTooltipOverride();
};

