#include "SolsticeGameState.h"
#include "Net/UnrealNetwork.h"

ASolsticeGameState::ASolsticeGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CampaignStateComponent = NULL;
    this->MissionSetupActor = NULL;
    this->CampaignMode = ECampaignMode::Skirmish;
    this->Corporation = ECorporation::Invalid;
    this->GameDifficulty = EDifficulty::Veteran;
    this->MaxAllowedTeamBots = 3;
    this->GameOnlineAccessibility = ESolsticeGameAccessibility::Public;
    this->MatchType = EMatchType::Ranked;
    this->GameType = EStrategyMissionGameType::Skirmish;
}

void ASolsticeGameState::UploadLeaderboardsAndStats() const {
}

void ASolsticeGameState::SetMatchType(EMatchType NewMatchType) {
}

void ASolsticeGameState::SetGameOnlineAccessibility(ESolsticeGameAccessibility Accessibility) {
}

void ASolsticeGameState::SetGameDifficulty(EDifficulty NewDifficulty) {
}

void ASolsticeGameState::RemoveTeamBot(UBotStatus* InBotStatus) {
}

void ASolsticeGameState::ProcessVoteKick(APlayerState* PlayerToKick, APlayerState* Voter) {
}

void ASolsticeGameState::OnRep_VoteToKickHelper() {
}

void ASolsticeGameState::OnRep_TeamComposition() {
}

void ASolsticeGameState::OnRep_TeamBots() {
}

void ASolsticeGameState::OnRep_MissionSetupActor() {
}

void ASolsticeGameState::OnRep_MatchType() {
}

void ASolsticeGameState::OnRep_GameType() {
}

void ASolsticeGameState::OnRep_GameOnlineAccessibility() {
}

void ASolsticeGameState::LeaderboardLeaderboardUploaded(ULeaderboardInfo* LeaderboardInfo, bool Success) {
}

bool ASolsticeGameState::IsInTeam(UBotStatus* InBotStatus) const {
    return false;
}

bool ASolsticeGameState::HasRoomForHeroClass(ESolsticeHeroClass HeroClass, ESolsticeHeroClass Slack) const {
    return false;
}

void ASolsticeGameState::HandleSessionCreated(const FSolsticeOnlineResultInformation& Result) {
}

void ASolsticeGameState::HandleMarineClassChanged(const FPowerSuitModel& PowerSuitModel) {
}

void ASolsticeGameState::HandleCharacterDataChanged(const FCharacterData& NewCharacterData) {
}

TMap<ESolsticeHeroClass, int32> ASolsticeGameState::GetTeamCompositionMap() const {
    return TMap<ESolsticeHeroClass, int32>();
}

int32 ASolsticeGameState::GetNumberOfTeamBots() const {
    return 0;
}

AMissionSetupActor* ASolsticeGameState::GetMissionSetupActor() const {
    return NULL;
}

EMatchType ASolsticeGameState::GetMatchType() const {
    return EMatchType::Ranked;
}

EStrategyMissionGameType ASolsticeGameState::GetGameType() const {
    return EStrategyMissionGameType::Invalid;
}

EDifficulty ASolsticeGameState::GetGameDifficulty() const {
    return EDifficulty::None;
}

void ASolsticeGameState::EndVoteToKick() {
}

bool ASolsticeGameState::CanAddTeamBot(UBotStatus* InBotStatus) const {
    return false;
}

void ASolsticeGameState::AddTeamBot(UBotStatus* InBotStatus) {
}

void ASolsticeGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASolsticeGameState, CampaignStateComponent);
    DOREPLIFETIME(ASolsticeGameState, TeamComposition);
    DOREPLIFETIME(ASolsticeGameState, MissionSetupActor);
    DOREPLIFETIME(ASolsticeGameState, CampaignMode);
    DOREPLIFETIME(ASolsticeGameState, Corporation);
    DOREPLIFETIME(ASolsticeGameState, GameDifficulty);
    DOREPLIFETIME(ASolsticeGameState, TeamBots);
    DOREPLIFETIME(ASolsticeGameState, OtherBots);
    DOREPLIFETIME(ASolsticeGameState, GameOnlineAccessibility);
    DOREPLIFETIME(ASolsticeGameState, MatchType);
    DOREPLIFETIME(ASolsticeGameState, GameType);
    DOREPLIFETIME(ASolsticeGameState, VoteToKickHelper);
}


