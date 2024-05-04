#pragma once
#include "CoreMinimal.h"
#include "TickAggregatorHandle.generated.h"

USTRUCT(BlueprintType)
struct FTickAggregatorHandle {
    GENERATED_BODY()
public:
    TWINSTICK_API FTickAggregatorHandle();
};
FORCEINLINE uint32 GetTypeHash(const FTickAggregatorHandle) { return 0; }

