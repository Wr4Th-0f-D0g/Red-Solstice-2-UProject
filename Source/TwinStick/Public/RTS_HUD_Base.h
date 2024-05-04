#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EActivationStatus.h"
#include "OnHUDVisiblityChangedDelegate.h"
#include "PlayerMatchSummary.h"
#include "SolsticeHUD_Base.h"
#include "RTS_HUD_Base.generated.h"

class AHeroCharacterBase;
class AMissionWaypointArrows;
class APawn;
class APlayerState;
class UAbilityBase;
class UInventoryComponent;
class UMainHUDWidgetBase;
class UMapSystem_MinimapWidgetBase;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API ARTS_HUD_Base : public ASolsticeHUD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDTurnedOffByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHUDEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainHUDWidgetBase* MainHUDWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDVisiblityChanged OnHUDVisiblityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FinalCountdownHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionWaypointArrows* MissionWaypointArrowActor;
    
    ARTS_HUD_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleIngameChat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchToVehicleHUD(bool bToVehicleHUD, APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AMissionWaypointArrows* SpawnMissionWayPointArrows();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowVoteToKickPrompt(APlayerState* PlayerToKick, float VoteStartTime, float VoteDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowVictory(const TArray<FPlayerMatchSummary>& Stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerTaskGroupCompleted(FGameplayTag TaskGroupBonusTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerTaskCompleted(FGameplayTag TaskTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerNameWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMissionObjective(const FText& MissionText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGamepadExtraOptionsRadial(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDialogDebugWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDefeat(const TArray<FPlayerMatchSummary>& Stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDebugWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAwardedMedal(FGameplayTag MedalTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventoryContext(UInventoryComponent* Context);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDTurnedOffByPlayer(bool bNewOff);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDHidden(bool bNewHidden, bool bToggleMinimap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusToSkillWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusToInventoryWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetIngameChat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseFocusToHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseFocusFromSkillWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseFocusFromInventoryWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerPromoted(AHeroCharacterBase* Player, int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializePlayerStateHUD();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMinimapForHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HostLeavingMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    bool HandleMinimapAddToViewport(UMapSystem_MinimapWidgetBase* MapWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHUDVisibilityChanged(bool bNewHidden, bool bToggleMinimap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinalCountdownStarted(FTimerHandle CountdownHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayTooltipWidget(UUserWidget* WidgetToShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayDamageNumber(const FVector& WorldLocation, const FVector& DamageNumberOffset, FLinearColor TextColor, const FText& Text, bool bIsCritical, bool bIsFatal, bool bIsLow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWeaponPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSkillPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePlayersPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateInventoryPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateInventory(UInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateChatPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCharacterPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbilityActivationStatusChanged(UAbilityBase* Ability, EActivationStatus Status);
    
};

