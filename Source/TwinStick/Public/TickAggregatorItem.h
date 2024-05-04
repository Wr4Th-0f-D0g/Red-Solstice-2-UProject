#pragma once
#include "CoreMinimal.h"
#include "TickAggregatorItem.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FTickAggregatorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* Component;
    
    TWINSTICK_API FTickAggregatorItem();
};

