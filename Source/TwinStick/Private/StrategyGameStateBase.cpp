#include "StrategyGameStateBase.h"
#include "Net/UnrealNetwork.h"

AStrategyGameStateBase::AStrategyGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStratagemsAllowedInGame = true;
    this->bGameIsStarting = false;
    this->StrategyMapManager = NULL;
    this->Dropship = NULL;
    this->HQ = NULL;
    this->PreviewBot = NULL;
    this->PreviewBotHero = NULL;
}

void AStrategyGameStateBase::SetPreviewBot(UBotStatus* InBotStatus) {
}

void AStrategyGameStateBase::SetGameIsStarting(bool NewStarting) {
}

void AStrategyGameStateBase::ServerImpatientToStartGame() {
}

void AStrategyGameStateBase::OnRep_StrategemBuffs() {
}

void AStrategyGameStateBase::OnRep_GameIsStarting() {
}

void AStrategyGameStateBase::MulticastServerImpatientToStartGame_Implementation() {
}

void AStrategyGameStateBase::MulticastClientPlayCinematic_Implementation(FGameplayTag CinematicTag) {
}

AStrategyMapManager* AStrategyGameStateBase::GetMapManager() const {
    return NULL;
}

AExecutorHQ* AStrategyGameStateBase::GetHQ() const {
    return NULL;
}

AStrategyDropship* AStrategyGameStateBase::GetDropship() const {
    return NULL;
}

void AStrategyGameStateBase::AddBotsToSquad(int32 BotCount) {
}

void AStrategyGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategyGameStateBase, bStratagemsAllowedInGame);
    DOREPLIFETIME(AStrategyGameStateBase, StrategemBuffs);
    DOREPLIFETIME(AStrategyGameStateBase, bGameIsStarting);
}


