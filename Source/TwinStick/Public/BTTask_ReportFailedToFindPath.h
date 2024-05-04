#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ReportFailedToFindPath.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_ReportFailedToFindPath : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ReportFailedToFindPath();

};

