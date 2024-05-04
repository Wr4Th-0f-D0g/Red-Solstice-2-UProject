#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GoalActorOnBiomass.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_GoalActorOnBiomass : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector GoalActorKey;
    
    UBTDecorator_GoalActorOnBiomass();

};

