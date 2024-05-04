#pragma once
#include "CoreMinimal.h"
#include "StrategyMapEventBase.h"
#include "CooldownEventBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UCooldownEventBase : public UStrategyMapEventBase {
    GENERATED_BODY()
public:
    UCooldownEventBase();

};

