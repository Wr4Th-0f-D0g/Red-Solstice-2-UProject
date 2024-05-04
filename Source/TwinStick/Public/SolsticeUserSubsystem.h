#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "ESolsticeUserInitializationState.h"
#include "LeaderboardEntryStruct.h"
#include "SolsticeLeaderboardEntriesDownloadedDelegateDelegate.h"
#include "SolsticeLeaderboardUploadedDelegateDelegate.h"
#include "SolsticeLeaderboardsInitializedDelegateDelegate.h"
#include "SolsticeUserAvailabilityChangedDelegateDelegate.h"
#include "SolsticeUserHandleSystemMessageDelegateDelegate.h"
#include "SolsticeUserInitializeParams.h"
#include "SolsticeUserOnInitializeCompleteMulticastDelegate.h"
#include "SolsticeUserOnQueryAchievementsCompleteDelegate.h"
#include "SolsticeUserSubsystem.generated.h"

class ULeaderboardInfo;
class USolsticeUserInfo;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API USolsticeUserSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeUserOnInitializeCompleteMulticast OnUserInitializeComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeUserHandleSystemMessageDelegate OnHandleSystemMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeUserAvailabilityChangedDelegate OnUserPrivilegeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeUserOnQueryAchievementsComplete OnQueryAchievementsComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, USolsticeUserInfo*> LocalUserInfos;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULeaderboardInfo*> LeaderboardInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaderboardsInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeLeaderboardUploadedDelegate LeaderboardUploaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeLeaderboardsInitializedDelegate LeaderboardsInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeLeaderboardEntriesDownloadedDelegate LeaderboardsBatchDownloaded;
    
    USolsticeUserSubsystem();

    UFUNCTION(BlueprintCallable)
    void UploadLocalPLayerStats();
    
    UFUNCTION(BlueprintCallable)
    void UploadLeaderboardScores();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAchievementProgress(const USolsticeUserInfo* UserInfo, const FGameplayTag& Achievement, float Percent);
    
    UFUNCTION(BlueprintCallable)
    bool TryToLoginForOnlinePlay(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool TryToInitializeUser(FSolsticeUserInitializeParams Params);
    
    UFUNCTION(BlueprintCallable)
    bool TryToInitializeForLocalPlay(int32 LocalPlayerIndex, int32 ControllerId, bool bCanUseGuestLogin);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldWaitForStartInput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLocalPlayers(int32 InMaxLocalPLayers);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocalPlayerStatInt(int32 InStatValue, const FString& InStatName);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderboardScore(FName InLeaderboardName, int32 InScore, bool bForceResult);
    
    UFUNCTION(BlueprintCallable)
    void SendSystemMessage(FGameplayTag MessageType, FGameplayTag MessageTag, const FString& Additional);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleEventNoParams(const FString& InEventName);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleEventIntParams(const FString& InEventName, TMap<FString, int32> Params);
    
    UFUNCTION(BlueprintCallable)
    void ResetUserState();
    
    UFUNCTION(BlueprintCallable)
    void ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FSolsticeUserInitializeParams Params);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyLeaderboardDirty();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyLeaderboardBeingUploaded();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyLeaderboardBeingDownloaded();
    
    UFUNCTION(BlueprintCallable)
    void InitLeaderboards();
    
    UFUNCTION(BlueprintCallable)
    bool IncrementLocalPlayerStatInt(int32 InStatValueAdded, const FString& InStatName);
    
    UFUNCTION(BlueprintCallable)
    void IncrementLeaderboardScore(FName InLeaderboardName, int32 InAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraitTag(const FGameplayTag TraitTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAchievement(const USolsticeUserInfo* UserInfo, FGameplayTag Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USolsticeUserInfo* GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USolsticeUserInfo* GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USolsticeUserInfo* GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USolsticeUserInfo* GetUserInfoForControllerId(int32 ControllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumLocalPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLocalPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerStatInt(int32& OutValue, const FString& InStatName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalPlayerScore(FName InLeaderboardName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerLeaderboardEntry(FLeaderboardEntryStruct& OutLeaderboardEntry, FName InLeaderboardName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeUserInitializationState GetLocalPlayerInitializationState(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardScoreGlobalRank(FName InLeaderboardName, int32 InLowest, int32 InHighest);
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardScoreFriends(FName InLeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardScoreAroundPlayer(FName InLeaderboardName, int32 InMinus, int32 InPlus);
    
    UFUNCTION(BlueprintCallable)
    void DownloadAllLeaderboardScoreGlobalRank(int32 InLowest, int32 InHighest);
    
    UFUNCTION(BlueprintCallable)
    void DownloadAllLeaderboardScoreFriends();
    
    UFUNCTION(BlueprintCallable)
    void DownloadAllLeaderboardScoreAroundPlayer(int32 InMinus, int32 InPlus);
    
    UFUNCTION(BlueprintCallable)
    void ClearLeaderboardEntries(FName InLeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLeaderboardEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayOnline(const USolsticeUserInfo* UserInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlay(const USolsticeUserInfo* UserInfo) const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelUserInitialization(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreStatsInitialized() const;
    
};

