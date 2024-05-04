#pragma once
#include "CoreMinimal.h"
#include "EInteractionStatus.h"
#include "InteractionStatus.generated.h"

USTRUCT(BlueprintType)
struct FInteractionStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractionInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionStatus LastTransitionReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    TWINSTICK_API FInteractionStatus();
};

