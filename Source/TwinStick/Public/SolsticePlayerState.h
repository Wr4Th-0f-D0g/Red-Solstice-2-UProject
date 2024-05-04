#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "BotStatusChangedDelegate.h"
#include "CharacterData.h"
#include "CharacterDataChangedDelegate.h"
#include "PlayerNameChangedDelegate.h"
#include "PlayerRank.h"
#include "PlayerStatContainer.h"
#include "RankDataReceivedDelegate.h"
#include "ReplicatedAttributeModifier.h"
#include "SolsticePlayerState.generated.h"

class AHeroCharacterBase;
class UBotStatus;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticePlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStartedFromLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlayerStatContainer PlayerMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerRank, meta=(AllowPrivateAccess=true))
    FPlayerRank PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyChallengesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatContainer PlayerMedalsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerStatContainer> PlayerTempStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Hero, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterData, meta=(AllowPrivateAccess=true))
    FCharacterData CharacterData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BotStatus, meta=(AllowPrivateAccess=true))
    UBotStatus* BotStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotStatusChanged OnBotStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDataChanged OnCharacterDataChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerReplicatedNetId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProfileAttributeModifiers, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedAttributeModifier> ProfileAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadAttributeModifiers, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedAttributeModifier> SquadAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRankDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankDataReceived OnRankDataReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* RankBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPlayerIsHost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNameChanged OnPlayerNameChanged;
    
    ASolsticePlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void VoteToKickPlayer(APlayerState* PlayerToKick);
    
    UFUNCTION(BlueprintCallable)
    bool SetCharacterData(const FCharacterData& NewData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetRank(const FPlayerRank& InRank, int32 InDailyChallengesCompleted, FPlayerStatContainer InPlayerMedals, const TArray<FPlayerStatContainer>& InPlayerTempStats);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetProfileAttributes(const TArray<FReplicatedAttributeModifier>& ReplicatedAttributeModifiers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerReplicatedNetID(const FUniqueNetIdRepl& InPlayerReplicatedNetId);
    
    UFUNCTION(BlueprintCallable)
    void PlayerPromoted(const AHeroCharacterBase* InPlayer, int32 NewRank);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadAttributeModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProfileAttributeModifiers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerRank(const FPlayerRank& OldRank);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Hero(AHeroCharacterBase* OldHero);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterData(const FCharacterData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BotStatus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrategyFollower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPlayerReplicatedNetId() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateDummyBotStatus();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientQueueVoteToKick(APlayerState* PlayerToKick, float TimeVoteStarted, float VoteDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ApplyRankBuff();
    
};

