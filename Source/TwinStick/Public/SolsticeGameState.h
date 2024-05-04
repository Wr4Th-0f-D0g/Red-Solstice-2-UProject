#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "GameFramework/GameState.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "CharacterData.h"
#include "ECampaignMode.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "EMatchType.h"
#include "ESolsticeGameAccessibility.h"
#include "ESolsticeHeroClass.h"
#include "EStrategyMissionGameType.h"
#include "KickVoteHelper.h"
#include "MissionSetupActorSetDelegate.h"
#include "PostPlayerArrayChangedDelegate.h"
#include "PowerSuitModel.h"
#include "SolsticeOnlineResultInformation.h"
#include "TeamBotsChangedDelegate.h"
#include "TeamCompositionChangedDelegate.h"
#include "SolsticeGameState.generated.h"

class AHeroCharacterBase;
class AMissionSetupActor;
class APlayerState;
class ASolsticeCharacterBase;
class UBotStatus;
class UCampaignStateComponent;
class ULeaderboardInfo;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeGameState : public AGameState, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostPlayerArrayChanged PostPlayerArrayChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UCampaignStateComponent* CampaignStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, int32> TeamCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamComposition, meta=(AllowPrivateAccess=true))
    TArray<ESolsticeHeroClass> TeamComposition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionSetupActor, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* MissionSetupActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECampaignMode CampaignMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECorporation Corporation;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamCompositionChanged OnTeamCompositionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EDifficulty GameDifficulty;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionSetupActorSet OnMissionSetupActorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamBots, meta=(AllowPrivateAccess=true))
    TArray<UBotStatus*> TeamBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAllowedTeamBots;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamBotsChanged OnTeamBotsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UBotStatus*> OtherBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeCharacterBase*> Pawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHeroCharacterBase*> PlayerPawns;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate PostNewPlayerRankReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameOnlineAccessibility, meta=(AllowPrivateAccess=true))
    ESolsticeGameAccessibility GameOnlineAccessibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnGameOnlineAccessibilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchType, meta=(AllowPrivateAccess=true))
    EMatchType MatchType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnMatchTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnGameTypeUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameType, meta=(AllowPrivateAccess=true))
    EStrategyMissionGameType GameType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VoteToKickHelper, meta=(AllowPrivateAccess=true))
    FKickVoteHelper VoteToKickHelper;
    
    ASolsticeGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UploadLeaderboardsAndStats() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMatchType(EMatchType NewMatchType);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOnlineAccessibility(ESolsticeGameAccessibility Accessibility);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficulty(EDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTeamBot(UBotStatus* InBotStatus);
    
    UFUNCTION(BlueprintCallable)
    void ProcessVoteKick(APlayerState* PlayerToKick, APlayerState* Voter);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VoteToKickHelper();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamComposition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamBots();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionSetupActor();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameOnlineAccessibility();
    
    UFUNCTION(BlueprintCallable)
    void LeaderboardLeaderboardUploaded(ULeaderboardInfo* LeaderboardInfo, bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTeam(UBotStatus* InBotStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRoomForHeroClass(ESolsticeHeroClass HeroClass, ESolsticeHeroClass Slack) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSessionCreated(const FSolsticeOnlineResultInformation& Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleMarineClassChanged(const FPowerSuitModel& PowerSuitModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterDataChanged(const FCharacterData& NewCharacterData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ESolsticeHeroClass, int32> GetTeamCompositionMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTeamBots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionSetupActor* GetMissionSetupActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchType GetMatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionGameType GetGameType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetGameDifficulty() const;
    
    UFUNCTION(BlueprintCallable)
    void EndVoteToKick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddTeamBot(UBotStatus* InBotStatus) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTeamBot(UBotStatus* InBotStatus);
    

    // Fix for true pure virtual functions not being implemented
};

