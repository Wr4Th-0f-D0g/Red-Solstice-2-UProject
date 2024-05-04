#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "SolsticeNavigationSystemV1.generated.h"

class ARTSNavMeshBounds;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API USolsticeNavigationSystemV1 : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    USolsticeNavigationSystemV1();

    UFUNCTION(BlueprintCallable)
    void OnRTSNavigationBoundsUpdated(ARTSNavMeshBounds* NavVolume);
    
};

