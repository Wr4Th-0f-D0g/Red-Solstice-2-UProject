#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "ArmoryHostButtonCheckChangedDelegate.h"
#include "ArmoryHostButton.generated.h"

class UCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UArmoryHostButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmoryHostButtonCheckChanged OnHostButtonCheckChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* HostCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownPassedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRankedChecked;
    
public:
    UArmoryHostButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLeaveText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHostText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHostButtonColour(bool bReady);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSessionDestroyed(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void HandleHostCheckChanged(bool bIsChecked);
    
};

