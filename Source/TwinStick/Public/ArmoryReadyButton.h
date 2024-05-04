#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "ArmoryReadyButtonCheckChangedDelegate.h"
#include "PowerSuitModel.h"
#include "StrategyViewConfiguration.h"
#include "ArmoryReadyButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UArmoryReadyButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmoryReadyButtonCheckChanged OnArmoryReadyButtonCheckChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableHotJoinTime;
    
public:
    UArmoryReadyButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonStateForServer();
    
    UFUNCTION(BlueprintCallable)
    void UpdateButtonState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonChecked(bool bChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHotJoining() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView);
    
    UFUNCTION(BlueprintCallable)
    void HandleSessionDestroyedHotJoin(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerReadyChanged(bool bNewStarting);
    
    UFUNCTION(BlueprintCallable)
    void HandleMarineClassChangedHotJoin(const FPowerSuitModel& PowerSuitModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStartingChanged(bool bNewStarting);
    
    UFUNCTION(BlueprintCallable)
    void HandleClassRequestReceivedHotJoin();
    
    UFUNCTION(BlueprintCallable)
    void EnableHotJoin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayersReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHotJoin() const;
    
};

