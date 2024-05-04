#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_InRange.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_InRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UBTDecorator_InRange();

};

