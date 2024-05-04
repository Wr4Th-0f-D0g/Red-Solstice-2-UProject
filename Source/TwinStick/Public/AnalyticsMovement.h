#pragma once
#include "CoreMinimal.h"
#include "AnalyticsMovementItem.h"
#include "AnalyticsMovement.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsMovementItem> Items;
    
    TWINSTICK_API FAnalyticsMovement();
};

