#pragma once
#include "CoreMinimal.h"
#include "SimpleInteractionTracker.h"
#include "InteractionTracker.generated.h"

USTRUCT(BlueprintType)
struct FInteractionTracker : public FSimpleInteractionTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Payload;
    
    TWINSTICK_API FInteractionTracker();
};

