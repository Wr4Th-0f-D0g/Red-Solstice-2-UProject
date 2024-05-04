#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "ChroniclesPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UChroniclesPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UChroniclesPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

