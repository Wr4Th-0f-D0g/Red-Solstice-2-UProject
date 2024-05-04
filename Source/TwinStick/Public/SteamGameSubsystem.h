#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LeaderboardEntryStruct.h"
#include "SolsticeLeaderboardEntriesDownloadedDelegateDelegate.h"
#include "SolsticeLeaderboardUploadedDelegateDelegate.h"
#include "SolsticeLeaderboardsInitializedDelegateDelegate.h"
#include "SolsticeSteamGameID.h"
#include "SteamGameSubsystem.generated.h"

class ULeaderboardInfo;

UCLASS(Blueprintable)
class TWINSTICK_API USteamGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUserStatsReceivedMainThreadDelegate, FSolsticeSteamGameID, GameID, bool, ResultOk, const FString&, userID);
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, int32> FriendsInGameMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserStatsReceivedMainThreadDelegate OnUserStatsReceivedGameThread;
    
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
    
    USteamGameSubsystem();

    UFUNCTION(BlueprintCallable)
    void UploadPlayerStats();
    
    UFUNCTION(BlueprintCallable)
    void UploadLeaderboardScores();
    
    UFUNCTION(BlueprintCallable)
    void TestUploadLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    void TestDownloadLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    bool SetLocalPlayerStatInt(int32 InStatValue, const FString& InStatName);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderboardScore(FName InLeaderboardName, int32 InScore, bool bForceResult);
    
    UFUNCTION(BlueprintCallable)
    void ReadLocalPlayerStats();
    
    UFUNCTION(BlueprintCallable)
    void InitSteamLeaderboards();
    
    UFUNCTION(BlueprintCallable)
    void IncrementLeaderboardScore(FName InLeaderboardName, int32 InAmount);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalPlayerStatInt(int32& OutValue, const FString& InStatName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalPlayerScore(FName InLeaderboardName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerLeaderboardEntry(FLeaderboardEntryStruct& OutLeaderboardEntry, FName InLeaderboardName) const;
    
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
    bool AreStatsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    bool AppendLocalPlayerStatInt(int32 InStatValueAdded, const FString& InStatName);
    
};

