#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "AICrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAICrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityCompensationAccelAdjustmentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPausePathfollowingVelocity: 1;
    
    UAICrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

