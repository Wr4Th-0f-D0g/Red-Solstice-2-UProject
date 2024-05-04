#pragma once
#include "CoreMinimal.h"
#include "FlyingMonsterComponentBase.h"
#include "FlyerMonsterComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UFlyerMonsterComponentBase : public UFlyingMonsterComponentBase {
    GENERATED_BODY()
public:
    UFlyerMonsterComponentBase(const FObjectInitializer& ObjectInitializer);

};

