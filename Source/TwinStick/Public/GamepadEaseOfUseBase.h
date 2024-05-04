#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GamepadEaseOfUseBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGamepadEaseOfUseBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAnalogMoveTime;
    
    UGamepadEaseOfUseBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOptionChosen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMovementUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMovementRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMovementLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMovementDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBackedOut();
    
};

