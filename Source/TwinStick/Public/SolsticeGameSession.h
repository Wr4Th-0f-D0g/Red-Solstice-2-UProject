#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "SolsticeGameSession.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ASolsticeGameSession(const FObjectInitializer& ObjectInitializer);

};

