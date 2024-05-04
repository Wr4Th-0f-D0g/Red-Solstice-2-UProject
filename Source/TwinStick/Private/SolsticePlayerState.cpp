#include "SolsticePlayerState.h"
#include "Net/UnrealNetwork.h"

ASolsticePlayerState::ASolsticePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartedFromLobby = false;
    this->DailyChallengesCompleted = 0;
    this->Hero = NULL;
    this->BotStatus = NULL;
    this->bRankDataReceived = false;
    this->RankBuff = NULL;
    this->bPlayerIsHost = false;
}

void ASolsticePlayerState::VoteToKickPlayer_Implementation(APlayerState* PlayerToKick) {
}

bool ASolsticePlayerState::SetCharacterData(const FCharacterData& NewData) {
    return false;
}

void ASolsticePlayerState::ServerSetRank_Implementation(const FPlayerRank& InRank, int32 InDailyChallengesCompleted, FPlayerStatContainer InPlayerMedals, const TArray<FPlayerStatContainer>& InPlayerTempStats) {
}

void ASolsticePlayerState::ServerSetProfileAttributes_Implementation(const TArray<FReplicatedAttributeModifier>& ReplicatedAttributeModifiers) {
}

void ASolsticePlayerState::ServerSetPlayerReplicatedNetID_Implementation(const FUniqueNetIdRepl& InPlayerReplicatedNetId) {
}

void ASolsticePlayerState::PlayerPromoted(const AHeroCharacterBase* InPlayer, int32 NewRank) {
}

void ASolsticePlayerState::OnRep_SquadAttributeModifiers() {
}

void ASolsticePlayerState::OnRep_ProfileAttributeModifiers() {
}

void ASolsticePlayerState::OnRep_PlayerRank(const FPlayerRank& OldRank) {
}

void ASolsticePlayerState::OnRep_Hero(AHeroCharacterBase* OldHero) {
}

void ASolsticePlayerState::OnRep_CharacterData(const FCharacterData& OldData) {
}

void ASolsticePlayerState::OnRep_BotStatus() {
}

bool ASolsticePlayerState::IsStrategyFollower() const {
    return false;
}

bool ASolsticePlayerState::IsPlayer() const {
    return false;
}

bool ASolsticePlayerState::IsBot() const {
    return false;
}

FUniqueNetIdRepl ASolsticePlayerState::GetPlayerReplicatedNetId() const {
    return FUniqueNetIdRepl{};
}

void ASolsticePlayerState::CreateDummyBotStatus() {
}

void ASolsticePlayerState::ClientQueueVoteToKick_Implementation(APlayerState* PlayerToKick, float TimeVoteStarted, float VoteDuration) {
}

bool ASolsticePlayerState::ApplyRankBuff() {
    return false;
}

void ASolsticePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASolsticePlayerState, bStartedFromLobby);
    DOREPLIFETIME(ASolsticePlayerState, PlayerMedals);
    DOREPLIFETIME(ASolsticePlayerState, PlayerRank);
    DOREPLIFETIME(ASolsticePlayerState, Hero);
    DOREPLIFETIME(ASolsticePlayerState, CharacterData);
    DOREPLIFETIME(ASolsticePlayerState, BotStatus);
    DOREPLIFETIME(ASolsticePlayerState, PlayerReplicatedNetId);
    DOREPLIFETIME(ASolsticePlayerState, ProfileAttributeModifiers);
    DOREPLIFETIME(ASolsticePlayerState, SquadAttributeModifiers);
    DOREPLIFETIME(ASolsticePlayerState, bPlayerIsHost);
}


