#pragma once
#include "CoreMinimal.h"
#include "PowerConsumer.h"
#include "SkillTerminalBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ASkillTerminalBase : public APowerConsumer {
    GENERATED_BODY()
public:
    ASkillTerminalBase(const FObjectInitializer& ObjectInitializer);

};

