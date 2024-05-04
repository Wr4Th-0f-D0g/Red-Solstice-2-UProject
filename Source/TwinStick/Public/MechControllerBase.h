#pragma once
#include "CoreMinimal.h"
#include "HeroControllerBase.h"
#include "MechControllerBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AMechControllerBase : public AHeroControllerBase {
    GENERATED_BODY()
public:
    AMechControllerBase(const FObjectInitializer& ObjectInitializer);

};

