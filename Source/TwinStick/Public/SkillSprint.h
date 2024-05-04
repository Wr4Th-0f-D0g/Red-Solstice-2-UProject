#pragma once
#include "CoreMinimal.h"
#include "MarineSkillBase.h"
#include "SkillSprint.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USkillSprint : public UMarineSkillBase {
    GENERATED_BODY()
public:
    USkillSprint(const FObjectInitializer& ObjectInitializer);

};

