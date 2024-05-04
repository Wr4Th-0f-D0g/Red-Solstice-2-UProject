#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "ControlNameTextStruct.h"
#include "EGameState.h"
#include "EMatchType.h"
#include "ESolsticeUserAvailability.h"
#include "ESolsticeUserPrivilege.h"
#include "GameInstanceAlphaRequestDoneDelegate.h"
#include "GameInstanceChangeLogRequsestDelegate.h"
#include "GameInstanceStateChangedDelegate.h"
#include "GameSetupStruct.h"
#include "KeyIconStruct.h"
#include "OnEnteredMainMenuDelegate.h"
#include "Response_AlphaStatus.h"
#include "Templates/SubclassOf.h"
#include "ChroniclesGameInstance.generated.h"

class UActivationAreaEffect;
class UAudioOptionsObject;
class UControlsOptionsObject;
class UFMODBus;
class UFMODEvent;
class UFMODVCA;
class UGameplayOptionsObject;
class UGlobalDefinitions;
class UGraphicsOptionsObject;
class UMusicManager;
class UObject;
class UOptionsObject;
class UOptionsRelatedDefinitions;
class USolsticeSession_HostSessionRequest;
class USolsticeSession_SearchResult;
class USolsticeUserInfo;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class TWINSTICK_API UChroniclesGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeSetID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeavingGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VersionID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInstanceChangeLogRequsest OnChangeLogRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChangeLogText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeSession_SearchResult* RequestedSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeSession_HostSessionRequest* HostSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadedAssets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredMainMenu OnEnteredMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActivationAreaEffect> AreaSkillActivationClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInstanceAlphaRequestDone OnGameInstanceAlphaRequestDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponse_AlphaStatus AlphaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalDefinitions* GlobalDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsRelatedDefinitions* OptionsRelatedDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameState CurrentGameState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInstanceStateChanged OnGameInstanceStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlNameTextStruct> KeyActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyIconStruct> KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* EffectsVCA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* MusicVCA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* DialogueVCA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* AmbianceVCA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SilenceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBus*> BusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSetupStruct GameSetupStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionsObject* OptionsObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NativeDefaultLoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NativeGameMapLoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SkirmishLevelMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadingWidgetCombatRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatchnotesFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PatchnotesText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMusicManager> MusicManagerType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicManager* MusicManagerInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsNoStratagems;
    
    UChroniclesGameInstance();

    UFUNCTION(BlueprintCallable)
    void UnloadCampaign();
    
    UFUNCTION(BlueprintCallable)
    void ToggleIngameMenu();
    
    UFUNCTION(BlueprintCallable)
    void TakeScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void StartSilenceSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPressStartScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMainMenuWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoadingScreenCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void ShowDefaultLoadingScreen(bool bAllowGameThread);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowChangeSetIDOverlay();
    
    UFUNCTION(BlueprintCallable)
    void ShowCampaignSetup();
    
    UFUNCTION(BlueprintCallable)
    void SetOfflineGame(bool bOffline);
    
    UFUNCTION(BlueprintCallable)
    void SendScreenshot(const FString& FeedbackString);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenuShowDialog(FGameplayTag NotificationTag, const FString& AdditionalString);
    
    UFUNCTION(BlueprintCallable)
    bool RequestChangeLog();
    
    UFUNCTION(BlueprintCallable)
    bool RequestAlphaIsOnline();
    
    UFUNCTION(BlueprintCallable)
    void PreLoadMap(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    void PreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoadMap(const FString& MAPNAME, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OpenTutorialLevel(FName TutorialLevelName);
    
    UFUNCTION(BlueprintCallable)
    void OpenOptionsMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenIntroMission(FName IntroMissionName);
    
    UFUNCTION(BlueprintCallable)
    void OpenCredits();
    
    UFUNCTION(BlueprintCallable)
    void OpenArmorySkirmish(EMatchType MatchType);
    
    UFUNCTION(BlueprintCallable)
    void OpenArmoryPrivate(bool bLeaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OpenArmoryCampaign();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EGameState OldState, EGameState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOfflineGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlphaOnline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideLoadingScreenCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void HideDefaultLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void HandleSystemMessage(FGameplayTag MessageType, FGameplayTag NotificationTag, const FString& Additional);
    
    UFUNCTION(BlueprintCallable)
    void HandlePrivilegeChanged(const USolsticeUserInfo* UserInfo, ESolsticeUserPrivilege Privilege, ESolsticeUserAvailability OldAvailability, ESolsticeUserAvailability NewAvailability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLevelTornDown(UWorld* InWorld);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPatchNotesText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOptionsObject* GetOptionsObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODVCA* GetMusicVCA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKeyIconsForKey(FKeyIconStruct& OutKeyStruct, FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSoundEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeSession_HostSessionRequest* GetHostSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGraphicsOptionsObject* GetGraphicsOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayOptionsObject* GetGameplayOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODVCA* GetEffectsVCA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODVCA* GetDialogueVCA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlsOptionsObject* GetControlOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChangeSetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioOptionsObject* GetAudioOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODVCA* GetAmbianceVCA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredServerListState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredPlayingState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredPausedState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredOptionsMenuState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredLoadingScreenState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredIntroMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredIngameMenuState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredCreditsState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredCampaignSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredArmorySkirmish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredArmoryPrivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteredArmoryCampaign();
    
    UFUNCTION(BlueprintCallable)
    void EndSilenceSound();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAchievements();
    
    UFUNCTION(BlueprintCallable)
    void CancelScreenshot(const FString& FeedbackString);
    
};

