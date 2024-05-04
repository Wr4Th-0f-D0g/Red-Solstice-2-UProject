#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Components/SlateWrapperTypes.h"
#include "CharacterWeaponData.h"
#include "EDropshipStatus.h"
#include "EStrategyInteractionState.h"
#include "ESuitSection.h"
#include "MSAChallengeRequirements.h"
#include "SelectedActorWidgetShownDelegate.h"
#include "SolsticeHUD_Base.h"
#include "SolsticeTechDescription.h"
#include "StrategyLevelViewChangedDelegate.h"
#include "StrategyMissionTimer.h"
#include "StrategyViewConfiguration.h"
#include "StrategyHUDBase.generated.h"

class AMissionSetupActor;
class APawn;
class ASolsticeWeaponBase;
class AStrategyMapActor;
class AStrategyMission;
class AStrategyPlayerState;
class UCallToActionBase;
class UCallToActionManager;
class UCharacterLoadoutPanel;
class UEventListBase;
class UEventWidgetBase;
class UNotificationWidgetBase;
class UPanelWidget;
class UStrategyMapActorWidgetBase;
class UTechObject;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API AStrategyHUDBase : public ASolsticeHUD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCallToActionManager* CallToActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMapActor> SelectedMapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyMapActorWidgetBase* SelectedMapActorWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedActorWidgetShown OnSelectedActorWidgetShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventListBase* EventListWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyLevelViewChanged OnStrategyLevelViewChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UPanelWidget*> ChatViewParents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterLoadoutPanel* MainLoadoutPanel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UPanelWidget*> TooltipViewParents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* TooltipPreviewWeapon;
    
    AStrategyHUDBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TrySetupForChallengeRequirements(FMSAChallengeRequirements ChallengeRequirements);
    
    // UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    // void TravelStarted(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSelectedMapActor(AStrategyMapActor* MapActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNotificationWidget(UNotificationWidgetBase* NotificationWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowModuleList(ESuitSection Section);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGrantedMissionTechAcquisitions(FGameplayTagContainer GrantedTechs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEventWidget(UEventWidgetBase* EventWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDropship();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDebugWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowInteractionCues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldDisplayNewItemNotifications() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTooltipPreviewWeapon(const FCharacterWeaponData& NewWeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMapActor(AStrategyMapActor* MapActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResearchCompleted(UTechObject* Tech);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTooltipPreviewWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveNotificationWidget(UNotificationWidgetBase* NotificationWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveEventWidget(UEventWidgetBase* EventWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTooltipParentForView(UPanelWidget* Parent, FGameplayTag ViewTag);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMainLoadoutPanel(UCharacterLoadoutPanel* NewLoadoutPanel);
    
    UFUNCTION(BlueprintCallable)
    void RegisterChatWidgetParentForView(UPanelWidget* Parent, FGameplayTag ViewTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerStateReady(AStrategyPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PawnReady(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionSetupActorSet(AMissionSetupActor* MissionSetupActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionFinalized(AStrategyMission* Mission);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionExpired(AStrategyMission* ExpiredMission);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionCompleted(AStrategyMission* CompletedMission, bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionAdded(AStrategyMission* NewMission);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MapTravelStarted(AStrategyMapActor* MapActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MapInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MapActorUnselected(AStrategyMapActor* MapActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MapActorSelected(AStrategyMapActor* MapActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedActorWidgetShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsANewResearchUnlock(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsANewEngineeringItemUnlock(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsANewDocumentUnlock(FName InName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsANewBeastInfoUnlock(FName InName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    void HandleTravelStarted(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionStatusChanged(const FStrategyMissionTimer& MissionStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleMapInitialized();
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState);
    
    UFUNCTION(BlueprintCallable)
    void HandleDropshipTargetChanged(AStrategyMapActor* OldTarget, AStrategyMapActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void HandleDropshipStatusChanged(EDropshipStatus DropshipStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallToActionShownChanged(UCallToActionBase* InWidget, bool InVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCallToActionShown(UCallToActionBase* Widget, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToPreviousTutorialSegment(FGameplayTag TutorialTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESlateVisibility GetTutorialBackButtonVisibility(FGameplayTag TutorialTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetTooltipPreviewWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterLoadoutPanel* GetMainLoadoutPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPanelWidget* GetDesiredTooltipParentForCurrentView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPanelWidget* GetDesiredChatParentForCurrentView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropshipReturningToHQ();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropshipReachedHQ();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanViewDocumentsEntry(const FSolsticeTechDescription& DocumentDescription) const;
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWeaponModsToPreviewWeapon(const FCharacterWeaponData& NewWeaponData);
    
};

