#pragma once
#include "CoreMinimal.h"
#include "AbilityDefinition.h"
#include "SkillDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSkillDefinition : public FAbilityDefinition {
    GENERATED_BODY()
public:
    TWINSTICK_API FSkillDefinition();
};

