#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_BurrowerFindClosestMarine.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_BurrowerFindClosestMarine : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_BurrowerFindClosestMarine();

};

