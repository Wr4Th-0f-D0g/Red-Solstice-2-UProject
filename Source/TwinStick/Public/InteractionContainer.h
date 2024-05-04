#pragma once
#include "CoreMinimal.h"
#include "InteractionReplicator.h"
#include "InteractionTracker.h"
#include "InteractionContainer.generated.h"

USTRUCT(BlueprintType)
struct FInteractionContainer : public FInteractionReplicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractionTracker> Items;
    
    TWINSTICK_API FInteractionContainer();
};

