#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitInfiniteTime.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_WaitInfiniteTime : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitInfiniteTime();

};

