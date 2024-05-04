#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StrategyInventoryItemDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStrategyInventoryItemDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    TWINSTICK_API FStrategyInventoryItemDescription();
};

