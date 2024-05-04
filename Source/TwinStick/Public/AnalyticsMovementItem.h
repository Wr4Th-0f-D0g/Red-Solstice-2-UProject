#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AnalyticsMovementItem.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsMovementItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    TWINSTICK_API FAnalyticsMovementItem();
};

