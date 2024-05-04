#pragma once
#include "CoreMinimal.h"
#include "EBiomassMonsterSpawnState.generated.h"

UENUM(BlueprintType)
enum class EBiomassMonsterSpawnState : uint8 {
    BMSS_StandbyNotSpawning,
    BMSS_StandbySpawning,
    BMSS_CheckForPlayerPresence,
    BMSS_DetermineSpawnParameters,
    BMSS_SpawnMonsters,
};

