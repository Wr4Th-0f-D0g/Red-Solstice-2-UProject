#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "MissionControllerBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AMissionControllerBase : public AAIController {
    GENERATED_BODY()
public:
    AMissionControllerBase(const FObjectInitializer& ObjectInitializer);

};

