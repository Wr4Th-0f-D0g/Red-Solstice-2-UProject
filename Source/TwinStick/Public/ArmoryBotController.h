#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ArmoryBotController.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AArmoryBotController : public AAIController {
    GENERATED_BODY()
public:
    AArmoryBotController(const FObjectInitializer& ObjectInitializer);

};

