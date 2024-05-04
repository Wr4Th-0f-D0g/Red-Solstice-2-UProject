#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InteractionReplicator.generated.h"

USTRUCT(BlueprintType)
struct FInteractionReplicator : public FFastArraySerializer {
    GENERATED_BODY()
public:
    TWINSTICK_API FInteractionReplicator();
};

