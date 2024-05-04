#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AbilityDescription.h"
#include "AbilityDescriptionRow.generated.h"

USTRUCT(BlueprintType)
struct FAbilityDescriptionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDescription AbilityDescription;
    
    TWINSTICK_API FAbilityDescriptionRow();
};

