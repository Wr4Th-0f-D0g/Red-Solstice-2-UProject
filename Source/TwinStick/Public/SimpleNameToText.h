#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SimpleNameToText.generated.h"

USTRUCT(BlueprintType)
struct FSimpleNameToText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    TWINSTICK_API FSimpleNameToText();
};

