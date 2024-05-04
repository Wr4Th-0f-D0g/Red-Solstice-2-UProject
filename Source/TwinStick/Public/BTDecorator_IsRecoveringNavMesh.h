#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsRecoveringNavMesh.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_IsRecoveringNavMesh : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsRecoveringNavMesh();

};

