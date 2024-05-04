#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SolsticeSaveInterface.generated.h"

UINTERFACE(Blueprintable)
class USolsticeSaveInterface : public UInterface {
    GENERATED_BODY()
};

class ISolsticeSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePreSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostLoadGame();
    
};

