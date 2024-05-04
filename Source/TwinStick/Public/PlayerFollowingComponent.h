#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "PlayerFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UPlayerFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UPlayerFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

