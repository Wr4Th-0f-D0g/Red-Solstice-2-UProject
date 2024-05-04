#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Highlightable.generated.h"

UINTERFACE(Blueprintable)
class UHighlightable : public UInterface {
    GENERATED_BODY()
};

class IHighlightable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Highlight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUnHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanHighlight();
    
};

