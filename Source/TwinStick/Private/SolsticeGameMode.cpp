#include "SolsticeGameMode.h"

ASolsticeGameMode::ASolsticeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PremadesTable = NULL;
    this->MissionSetupActor = NULL;
    this->MissionSetupActorClass = NULL;
    this->CampaignStateComponentClass = NULL;
}

void ASolsticeGameMode::UnbanPlayer(APlayerController* BannedPC) {
}

ASolsticeDrivableVehicle* ASolsticeGameMode::SpawnVehicleFromTag(FGameplayTag VehicleTag, const FTransform& SpawnTransform) {
    return NULL;
}

ASolsticeDrivableVehicle* ASolsticeGameMode::SpawnVehicle(const FSolsticeVehicleData& VehicleData, const FTransform& SpawnTransform) {
    return NULL;
}

AMissionSetupActor* ASolsticeGameMode::SpawnMissionSetupActorSkirmish(const FStrategyMissionData& InMissionData) {
    return NULL;
}

AMissionSetupActor* ASolsticeGameMode::SpawnMissionSetupActorPIE(FDataTableRowHandle InMissionRow) {
    return NULL;
}

void ASolsticeGameMode::SeamlessTravelToArmory(APlayerController* PC) {
}

void ASolsticeGameMode::SeamlessTravelTo(APlayerController* PC, FName MAPNAME, const FString& GameModeAlias) {
}

bool ASolsticeGameMode::PlayerEligibleForPlay(APlayerState* PlayerState) const {
    return false;
}

void ASolsticeGameMode::MarkPlayerEvacuated(APlayerController* EvacuatedPC) {
}


AMissionSetupActor* ASolsticeGameMode::FindMissionSetupActor() const {
    return NULL;
}

void ASolsticeGameMode::EvacUsed() {
}

void ASolsticeGameMode::BanPlayer(APlayerController* BannedPC) {
}


