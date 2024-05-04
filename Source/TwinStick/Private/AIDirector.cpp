#include "AIDirector.h"

UAIDirector::UAIDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaffronDrone = NULL;
    this->bDisableNavRecovery = false;
}

void UAIDirector::UpdateTauntGrabLocationAndGrabNewTargets(AActor* TauntActor, const FVector& NewLocation, float GrabRadius, bool bDiscardOldTaunted) {
}

void UAIDirector::UpdateMarineDistances() {
}

void UAIDirector::SetBotRoamingWithPlayer(ASolsticeCharacterBase* Player) {
}

bool UAIDirector::ReturnToken(int32& InTokenID, bool bCooldownToken, float CooldownTime) {
    return false;
}

void UAIDirector::ReturnDeadCharacterTokens(ASolsticeCharacterBase* DeadMonster) {
}

bool UAIDirector::RequestToken(ASolsticeCharacterBase* RequestingChar, AActor* TargetActor, EAITokenType TokenType, int32& OutTokenID) {
    return false;
}

void UAIDirector::RemoveTaunt(AActor* Taunter) {
}

void UAIDirector::RemoveBotRoamingWithPlayer(ASolsticeCharacterBase* Player) {
}

TArray<AMonsterControllerBase*> UAIDirector::K2_GetAllMonsterControllers() {
    return TArray<AMonsterControllerBase*>();
}

TArray<ANPCHeroController*> UAIDirector::K2_GetAllEnemyMarineControllers() {
    return TArray<ANPCHeroController*>();
}

TArray<AMonsterCharacterBase*> UAIDirector::K2_GetAllActiveMonstersByTags(FGameplayTagContainer MonsterTags) const {
    return TArray<AMonsterCharacterBase*>();
}

TArray<AMonsterCharacterBase*> UAIDirector::K2_GetAllActiveMonstersByTag(FGameplayTag MonsterTag) const {
    return TArray<AMonsterCharacterBase*>();
}

TArray<AMonsterCharacterBase*> UAIDirector::K2_GetAllActiveMonsters() const {
    return TArray<AMonsterCharacterBase*>();
}

TArray<AAIMarineHeroCharacterBase*> UAIDirector::K2_GetAllActiveFollowers() const {
    return TArray<AAIMarineHeroCharacterBase*>();
}

TArray<AAIMarineHeroCharacterBase*> UAIDirector::K2_GetAllActiveEnemyMarines() const {
    return TArray<AAIMarineHeroCharacterBase*>();
}

TArray<ABasicSolsticeAI*> UAIDirector::K2_GetAllActiveBasicAI() const {
    return TArray<ABasicSolsticeAI*>();
}

void UAIDirector::HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime) {
}

TArray<ASolsticeCharacterBase*> UAIDirector::GetWeightedEnemies(bool bInvertWeight, const FGameplayTagContainer& IgnoreTags, ESolsticeTeam MyTeam) const {
    return TArray<ASolsticeCharacterBase*>();
}

void UAIDirector::GenerateTokens(AActor* TokenActor, int32 SpawnTokens, int32 AttackTokens, int32 SpecialTokens, int32 DogTokens, int32 SnatcherTokens, int32 CreeperTokens) {
}

bool UAIDirector::FindGoodPlayerToRoamWith(ASolsticeCharacterBase*& BestPlayer, int32& OutBestPlayerCount) {
    return false;
}

void UAIDirector::AddTaunt(AActor* Taunter, const FTauntDetails& TauntDetails) {
}


