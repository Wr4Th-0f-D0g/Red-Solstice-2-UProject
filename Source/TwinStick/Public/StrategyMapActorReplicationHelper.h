#pragma once
#include "CoreMinimal.h"
#include "StrategyMapActorReplicationHelper.generated.h"

class AStrategyMapActor;

USTRUCT(BlueprintType)
struct FStrategyMapActorReplicationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* StartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceTravelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanetaryYaw;
    
    TWINSTICK_API FStrategyMapActorReplicationHelper();
};

