#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EControlCategory.h"
#include "OptionsMenuTextRow.generated.h"

USTRUCT(BlueprintType)
struct FOptionsMenuTextRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MenuText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlCategory Category;
    
    TWINSTICK_API FOptionsMenuTextRow();
};

