#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StrategyRegionManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyRegionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UStrategyRegionManager(const FObjectInitializer& ObjectInitializer);

};

