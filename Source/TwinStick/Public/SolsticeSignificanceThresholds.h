#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "SolsticeSignificanceThresholds.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSignificanceThresholds {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat Significance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat MaxDistance;
    
    TWINSTICK_API FSolsticeSignificanceThresholds();
};

