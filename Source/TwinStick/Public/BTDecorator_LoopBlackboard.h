#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_LoopBlackboard.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_LoopBlackboard : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LoopAmountKey;
    
    UBTDecorator_LoopBlackboard();

};

