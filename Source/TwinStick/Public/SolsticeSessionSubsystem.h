#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAirSupportLevel.h"
#include "EArtillerySupportLevel.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "EMatchType.h"
#include "ESecondaryMissionFrequency.h"
#include "EStrategyMissionGameType.h"
#include "SolsticeSessionOnCreateSessionComplete_DynamicDelegate.h"
#include "SolsticeSessionOnJoinSessionComplete_DynamicDelegate.h"
#include "SolsticeSessionOnUserRequestedSession_DynamicDelegate.h"
#include "SolsticeSessionSimpleDelegateDelegate.h"
#include "SolsticeSessionSubsystem.generated.h"

class APlayerController;
class USolsticeSession_HostSessionRequest;
class USolsticeSession_SearchResult;
class USolsticeSession_SearchSessionRequest;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeSessionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSessionSimpleDelegate OnSessionDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSessionOnUserRequestedSession_Dynamic K2_OnUserRequestedSessionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSessionOnJoinSessionComplete_Dynamic K2_OnJoinSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSessionOnCreateSessionComplete_Dynamic K2_OnCreateSessionCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USolsticeSession_SearchResult* PendingHotJoinRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJoiningSessionInProgress;
    
    USolsticeSessionSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateExistingSessionSettings(APlayerController* HostingPlayer, USolsticeSession_HostSessionRequest* Request);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TravelToStandaloneArmory();
    
    UFUNCTION(BlueprintCallable)
    bool TravelToLobbyGame();
    
public:
    UFUNCTION(BlueprintCallable)
    void QuickPlaySessionSpecific(APlayerController* JoiningPlayer, USolsticeSession_SearchSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    void QuickPlaySession(APlayerController* JoiningPlayer);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(APlayerController* JoiningPlayer, USolsticeSession_SearchResult* Request);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionJoinable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGameSession() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHostingSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoopCampaignSession() const;
    
    UFUNCTION(BlueprintCallable)
    void HostSession(APlayerController* HostingPlayer, USolsticeSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTeamCompositionCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESecondaryMissionFrequency GetSecondaryMissionFrequencyCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfestationLevelCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHordeArrivalTime GetHordeArrivalCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameWaveCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameVehicleCapCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionGameType GetGameTypeCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameTimeSecondsCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameStartedCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchType GetGameMatchTypeCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetGameDifficultyCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECorporation GetCorporationCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EArtillerySupportLevel GetArtillerySupportLevelCurrentSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAirSupportLevel GetAirSupportLevelCurrentSession() const;
    
    UFUNCTION(BlueprintCallable)
    void FindSessions(APlayerController* SearchingPlayer, USolsticeSession_SearchSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    USolsticeSession_SearchSessionRequest* CreateOnlineSearchSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    USolsticeSession_HostSessionRequest* CreateOnlineHostSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpSessions();
    
};

