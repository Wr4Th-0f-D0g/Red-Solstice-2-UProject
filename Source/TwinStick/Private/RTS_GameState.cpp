#include "RTS_GameState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ARTS_GameState::ARTS_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissionResult = EStrategyMissionResult::Invalid;
    this->PlayersEvacuated = -1;
    this->ExperienceComponent = NULL;
    this->TotalNumberPrefabs = -1;
    this->TickCount = 0;
    this->LevelSpecificsActor = NULL;
    this->AtmosphereController = NULL;
    this->Biomass = NULL;
    this->DropshipController = NULL;
    this->CondatisTrainHealthComponent = NULL;
}

void ARTS_GameState::RegisterTrainHealthComponent(UHealthComponent* NewTrainHealthComponent) {
}

void ARTS_GameState::OnRep_MinimapPingLocation() {
}

void ARTS_GameState::OnRep_LeaderMapPoints() {
}

void ARTS_GameState::HandleRandomizerDone() {
}

void ARTS_GameState::HandleRandomizationCompleted(APrefabActor* Prefab) {
}

ALevelSpecificsActor* ARTS_GameState::GetLevelSpecificsActor() const {
    return NULL;
}

int32 ARTS_GameState::GetGameRandomSeed() const {
    return 0;
}

UExperienceAwardComponent* ARTS_GameState::GetExperienceAwardComponent() const {
    return NULL;
}

ADropshipControllerBase* ARTS_GameState::GetDropshipController() const {
    return NULL;
}

ABiomassBase* ARTS_GameState::GetBiomassBase() const {
    return NULL;
}

AAtmosphereController* ARTS_GameState::GetAtmosphereController() const {
    return NULL;
}

void ARTS_GameState::FindLevelSpecificsActor() {
}

void ARTS_GameState::AwardExperience(float Experience, EExperienceRewardType ExperienceSource, FVector Location, AActor* Awardee, float Range) {
}

void ARTS_GameState::AddGlobalTeamBuff(TSubclassOf<USolsticeBuffBase> NewBuffClass, int32 NewBuffStacks) {
}

void ARTS_GameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARTS_GameState, TotalNumberPrefabs);
    DOREPLIFETIME(ARTS_GameState, MinimapPingLocation);
    DOREPLIFETIME(ARTS_GameState, LeaderMapPoints);
}


