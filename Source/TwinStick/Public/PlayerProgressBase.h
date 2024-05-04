#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "PlayerProgressBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API APlayerProgressBase : public AInfo {
    GENERATED_BODY()
public:
    APlayerProgressBase(const FObjectInitializer& ObjectInitializer);

};

