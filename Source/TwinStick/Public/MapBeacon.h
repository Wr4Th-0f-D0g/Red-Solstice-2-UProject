#pragma once
#include "CoreMinimal.h"
#include "StrategyMapActor.h"
#include "MapBeacon.generated.h"

class ARegion;

UCLASS(Blueprintable)
class TWINSTICK_API AMapBeacon : public AStrategyMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    AMapBeacon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRegion(ARegion* InRegion);
    
};

