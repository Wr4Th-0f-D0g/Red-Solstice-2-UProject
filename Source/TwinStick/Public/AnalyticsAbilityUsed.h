#pragma once
#include "CoreMinimal.h"
#include "AnalyticsAbilityUsed.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsAbilityUsed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ability;
    
    TWINSTICK_API FAnalyticsAbilityUsed();
};

