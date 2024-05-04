#include "RTS_GameMode.h"
#include "Templates/SubclassOf.h"

ARTS_GameMode::ARTS_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDelayedStart = true;
    this->RTSGameState = NULL;
    this->GroupPlayerStart = NULL;
    this->RTSNetworkManagerClass = NULL;
    this->FollowerBotClass = NULL;
    this->ReviveBuffClass = NULL;
    this->HotJoinInvulnerabilityTime = 30.00f;
    this->HotJoinHiddenFromMonstersTime = 30.00f;
    this->HeroAIControllerClass = NULL;
    this->ObserverPawnClass = NULL;
    this->InteractionActorClass = NULL;
    this->bShouldCreatePremadeCharacter = true;
    this->PremadeTemplateName = TEXT("Assault");
    this->PIEClassSelectionWidgetClass = NULL;
    this->MinSeedNumber = 0;
    this->MaxSeedNumber = 0;
    this->PoolManager = NULL;
}

void ARTS_GameMode::StartPlayer(APlayerController* NewPlayer) {
}


void ARTS_GameMode::SpawnStartingVehiclesTrain() {
}

void ARTS_GameMode::SpawnStartingVehicles() {
}

AHeroCharacterBase* ARTS_GameMode::SpawnPremadeHero(APlayerController* PC, FName PremadeName, FTransform SpawnTransform) {
    return NULL;
}

AObserverPawn* ARTS_GameMode::SpawnObserverPawn(APlayerController* PC, const FTransform& SpawnTransform) {
    return NULL;
}

AInteractionActor* ARTS_GameMode::SpawnInteractionActor(APlayerController* PC, const FTransform& SpawnTransform, AHeroCharacterBase* HeroOverride) {
    return NULL;
}

AHeroCharacterBase* ARTS_GameMode::SpawnHero(APlayerController* PC, FTransform SpawnTransform) {
    return NULL;
}

AAIMarineHeroCharacterBase* ARTS_GameMode::SpawnFollowerBot(UBotStatus* InBotStatus, const FTransform& InTransform, TSubclassOf<AAIMarineHeroCharacterBase> FollowerClassOverride) {
    return NULL;
}

AAIMarineHeroCharacterBase* ARTS_GameMode::SpawnAIMarineBotNonPowersuit(TSubclassOf<AAIMarineHeroCharacterBase> BotClass, const FAIMarineCharacterData& CharacterData, const FTransform& InTransform, const FText& InBotName, FMarineBotSettings BotSettings, bool bDoNotPossess) {
    return NULL;
}

AAIMarineHeroCharacterBase* ARTS_GameMode::SpawnAIMarineBot(TSubclassOf<AAIMarineHeroCharacterBase> BotClass, const FPowerSuitModel& SuitModel, const FTransform& InTransform, const FText& InBotName, FMarineBotSettings BotSettings, bool bDoNotPossess) {
    return NULL;
}


void ARTS_GameMode::ReInitCrowd() {
}

void ARTS_GameMode::QuitAndReturnToHQ() {
}


bool ARTS_GameMode::PlayerCanStart_Implementation(APlayerController* NewPlayer) {
    return false;
}



bool ARTS_GameMode::IsTrainGameMode_Implementation() const {
    return false;
}


void ARTS_GameMode::HandleMapShown(bool bShown) {
}

void ARTS_GameMode::HandleInactivePlayerRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ARTS_GameMode::HandleImmortalHeroRevived(AHeroCharacterBase* RevivedHero) {
}

void ARTS_GameMode::GiveAllPlayersAchievements(const FGameplayTagContainer& AchievementTags, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags) {
}

void ARTS_GameMode::GiveAllPlayersAchievement(const FGameplayTag& AchievementTag, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags) {
}

FVector ARTS_GameMode::FindAverageTeamPosition(ASolsticeCharacterBase* SolsticeChar) {
    return FVector{};
}



