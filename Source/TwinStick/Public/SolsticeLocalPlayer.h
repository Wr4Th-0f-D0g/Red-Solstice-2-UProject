#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SolsticeLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API USolsticeLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USolsticeLocalPlayer();

};

