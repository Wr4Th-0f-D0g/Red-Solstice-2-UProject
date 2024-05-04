#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "StrategyWaitParameters.generated.h"

USTRUCT(BlueprintType)
struct FStrategyWaitParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitUntilCampaignDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime CampaignDate;
    
    TWINSTICK_API FStrategyWaitParameters();
};

