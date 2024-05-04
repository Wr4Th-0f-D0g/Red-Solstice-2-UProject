#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_AtMoveTargetLocation.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_AtMoveTargetLocation : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDistance;
    
    UBTDecorator_AtMoveTargetLocation();

};

