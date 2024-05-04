#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AnalyticsDeathsItem.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsDeathsItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelfDeath;
    
    TWINSTICK_API FAnalyticsDeathsItem();
};

