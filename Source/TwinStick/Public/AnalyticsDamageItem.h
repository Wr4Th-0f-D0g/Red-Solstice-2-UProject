#pragma once
#include "CoreMinimal.h"
#include "AnalyticsDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsDamageItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Instigator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Damage;
    
    TWINSTICK_API FAnalyticsDamageItem();
};

