#pragma once
#include "CoreMinimal.h"
#include "MonsterComponentBase.h"
#include "CreeperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UCreeperComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UCreeperComponent(const FObjectInitializer& ObjectInitializer);

};

