#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "TerminalUserInterface.generated.h"

class APowerConsumer;

UINTERFACE(Blueprintable)
class UTerminalUserInterface : public UInterface {
    GENERATED_BODY()
};

class ITerminalUserInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TerminalDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TerminalActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveLinkedTerminal(APowerConsumer* Consumer, const FGuid& ConsumerGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGuid GetUserGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLinkedTerminal(APowerConsumer* Consumer, const FGuid& ConsumerGuid);
    
};

