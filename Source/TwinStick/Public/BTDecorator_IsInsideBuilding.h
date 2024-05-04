#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInsideBuilding.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_IsInsideBuilding : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsInsideBuilding();

};

