#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStatDisplayMode.h"
#include "GameplayTagDescription.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RequirementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatDisplayMode DisplayAs;
    
    TWINSTICK_API FGameplayTagDescription();
};

