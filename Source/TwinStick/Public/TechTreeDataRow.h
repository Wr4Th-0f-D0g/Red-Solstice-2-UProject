#pragma once
#include "CoreMinimal.h"
#include "TechTreeDataElement.h"
#include "TechTreeDataRow.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeDataRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechTreeDataElement> Elements;
    
    TWINSTICK_API FTechTreeDataRow();
};

