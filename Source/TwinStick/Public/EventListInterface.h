#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EventListInterface.generated.h"

class AStrategyMapActor;
class UEventWidgetBase;
class UObject;
class UTexture2D;
class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UEventListInterface : public UInterface {
    GENERATED_BODY()
};

class IEventListInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowWhilePaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRemoveWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetObjectEventWidget(UEventWidgetBase* InEventWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTotalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetEventTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetEventText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetEventOnClickViewTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AStrategyMapActor* GetEventMapActorTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetEventIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBePaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddEventWidgetToList(UObject* Context, UEventWidgetBase*& InEventWidget);
    
};

