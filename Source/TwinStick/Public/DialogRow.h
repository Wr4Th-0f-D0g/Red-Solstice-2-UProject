#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogLine.h"
#include "DialogRow.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FDialogRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogLine> Lines;
    
    FDialogRow();
};

