#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_WaitBBTimeCustom.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_WaitBBTimeCustom : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegatedTime;
    
public:
    UBTTask_WaitBBTimeCustom();

};

