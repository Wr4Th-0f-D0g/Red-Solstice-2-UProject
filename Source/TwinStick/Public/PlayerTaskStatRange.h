#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStatComparison.h"
#include "PlayerTaskStatRange.generated.h"

USTRUCT(BlueprintType)
struct FPlayerTaskStatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatComparison ComparisonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    TWINSTICK_API FPlayerTaskStatRange();
};

