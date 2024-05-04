#pragma once
#include "CoreMinimal.h"
#include "SolsticeGameSession.h"
#include "StrategyGameSession.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyGameSession : public ASolsticeGameSession {
    GENERATED_BODY()
public:
    AStrategyGameSession(const FObjectInitializer& ObjectInitializer);

};

