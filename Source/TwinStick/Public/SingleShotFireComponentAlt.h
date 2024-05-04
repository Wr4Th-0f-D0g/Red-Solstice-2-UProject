#pragma once
#include "CoreMinimal.h"
#include "SingleShotFireComponent.h"
#include "SingleShotFireComponentAlt.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USingleShotFireComponentAlt : public USingleShotFireComponent {
    GENERATED_BODY()
public:
    USingleShotFireComponentAlt(const FObjectInitializer& ObjectInitializer);

};

