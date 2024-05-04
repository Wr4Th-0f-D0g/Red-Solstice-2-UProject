#pragma once
#include "CoreMinimal.h"
#include "AnalyticsDeathsItem.h"
#include "AnalyticsDeaths.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsDeaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsDeathsItem> Items;
    
    TWINSTICK_API FAnalyticsDeaths();
};

