#pragma once
#include "CoreMinimal.h"
#include "MonsterSkillBase.h"
#include "SnatcherPinSkillBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USnatcherPinSkillBase : public UMonsterSkillBase {
    GENERATED_BODY()
public:
    USnatcherPinSkillBase(const FObjectInitializer& ObjectInitializer);

};

