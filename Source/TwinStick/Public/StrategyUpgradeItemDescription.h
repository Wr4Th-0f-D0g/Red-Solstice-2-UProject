#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StrategyUpgradeItemDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStrategyUpgradeItemDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UpgradeDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UpgradeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UpgradeTooltipText;
    
    TWINSTICK_API FStrategyUpgradeItemDescription();
};

