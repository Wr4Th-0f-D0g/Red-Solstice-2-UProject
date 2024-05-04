#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_EnemyMarineHasPercepted.generated.h"

class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_EnemyMarineHasPercepted : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
    UBTDecorator_EnemyMarineHasPercepted();

};

