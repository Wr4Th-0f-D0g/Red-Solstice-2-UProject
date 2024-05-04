#pragma once
#include "CoreMinimal.h"
#include "ESolsticeGameplayTagEventType.generated.h"

UENUM(BlueprintType)
namespace ESolsticeGameplayTagEventType {
    enum Type {
        NewOrRemoved,
        AnyCountChange,
    };
}

