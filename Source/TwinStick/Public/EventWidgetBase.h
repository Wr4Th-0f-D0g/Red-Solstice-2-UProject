#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EventWidgetBase.generated.h"

class IEventListInterface;
class UEventListInterface;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEventWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IEventListInterface> EventContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EventObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UEventWidgetBase();

    UFUNCTION(BlueprintCallable)
    void Unpause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TogglePause(bool IsPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetEventObject(UObject* InEventObject);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(TScriptInterface<IEventListInterface> NewContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedContext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostEventObjectSet();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
};

