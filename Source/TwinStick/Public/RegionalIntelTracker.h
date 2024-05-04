#pragma once
#include "CoreMinimal.h"
#include "RegionalIntelTracker.generated.h"

USTRUCT(BlueprintType)
struct FRegionalIntelTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float IntelValue;
    
    TWINSTICK_API FRegionalIntelTracker();
};

