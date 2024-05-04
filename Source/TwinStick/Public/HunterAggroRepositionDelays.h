#pragma once
#include "CoreMinimal.h"
#include "HunterAggroRepositionDelays.generated.h"

USTRUCT(BlueprintType)
struct FHunterAggroRepositionDelays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRepositionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRepositionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRepositionDelaySuppressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRepositionDelaySuppressed;
    
    TWINSTICK_API FHunterAggroRepositionDelays();
};

