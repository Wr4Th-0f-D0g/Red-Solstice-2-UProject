#pragma once
#include "CoreMinimal.h"
#include "MarineSkillBase.h"
#include "MeleeSkill.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMeleeSkill : public UMarineSkillBase {
    GENERATED_BODY()
public:
    UMeleeSkill(const FObjectInitializer& ObjectInitializer);

};

