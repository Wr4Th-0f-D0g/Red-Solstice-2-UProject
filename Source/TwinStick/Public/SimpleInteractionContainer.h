#pragma once
#include "CoreMinimal.h"
#include "InteractionReplicator.h"
#include "SimpleInteractionTracker.h"
#include "SimpleInteractionContainer.generated.h"

USTRUCT(BlueprintType)
struct FSimpleInteractionContainer : public FInteractionReplicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSimpleInteractionTracker> Items;
    
    TWINSTICK_API FSimpleInteractionContainer();
};

