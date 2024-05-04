#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TickAggregatorHandle.h"
#include "TickAggregatorItem.h"
#include "TickAggregatorSystem.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UTickAggregatorSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FTickAggregatorHandle, FTickAggregatorItem> TickableComponents;
    
    UTickAggregatorSystem();

};

