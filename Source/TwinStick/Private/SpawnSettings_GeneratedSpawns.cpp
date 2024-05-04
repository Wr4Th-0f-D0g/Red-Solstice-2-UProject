#include "SpawnSettings_GeneratedSpawns.h"
#include "Net/UnrealNetwork.h"

USpawnSettings_GeneratedSpawns::USpawnSettings_GeneratedSpawns() {
    this->bEnableTrashFiller = true;
}

void USpawnSettings_GeneratedSpawns::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnSettings_GeneratedSpawns, SpawnWaves);
    DOREPLIFETIME(USpawnSettings_GeneratedSpawns, ActiveConstSpawn);
    DOREPLIFETIME(USpawnSettings_GeneratedSpawns, PreGeneratedWaves);
}


