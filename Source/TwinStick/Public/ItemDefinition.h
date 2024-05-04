#pragma once
#include "CoreMinimal.h"
#include "AbilityDefinition.h"
#include "ItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FItemDefinition : public FAbilityDefinition {
    GENERATED_BODY()
public:
    TWINSTICK_API FItemDefinition();
};

