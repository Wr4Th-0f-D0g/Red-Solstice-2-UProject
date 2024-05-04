#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ClearFocus.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_ClearFocus : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailOnFinish;
    
    UBTTask_ClearFocus();

};

