#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MenuGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API AMenuGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AMenuGameMode(const FObjectInitializer& ObjectInitializer);

};
