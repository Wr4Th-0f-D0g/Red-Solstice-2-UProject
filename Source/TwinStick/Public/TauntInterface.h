#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TauntInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UTauntInterface : public UInterface {
    GENERATED_BODY()
};

class ITauntInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndTaunt(AActor* TauntingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoTaunt(AActor* TauntingActor);
    
};

