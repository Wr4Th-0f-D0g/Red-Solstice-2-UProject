#pragma once
#include "CoreMinimal.h"
#include "SolsticeHUD_Base.h"
#include "MainMenuHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API AMainMenuHUD : public ASolsticeHUD_Base {
    GENERATED_BODY()
public:
    AMainMenuHUD(const FObjectInitializer& ObjectInitializer);

};

