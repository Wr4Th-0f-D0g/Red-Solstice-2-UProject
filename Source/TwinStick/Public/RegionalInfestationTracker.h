#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "RegionalInfestationTracker.generated.h"

USTRUCT(BlueprintType)
struct FRegionalInfestationTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float InfestationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime LastInfestationIncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float InfestationGrowthRequiredTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float InfestationGrowthProgress;
    
    TWINSTICK_API FRegionalInfestationTracker();
};

