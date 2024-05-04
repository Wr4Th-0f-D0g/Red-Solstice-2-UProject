#pragma once
#include "CoreMinimal.h"
#include "AnalyticsDamageItem.h"
#include "AnalyticsDamage.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsDamageItem> Items;
    
    TWINSTICK_API FAnalyticsDamage();
};

