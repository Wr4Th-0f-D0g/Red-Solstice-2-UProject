#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.generated.h"

UENUM(BlueprintType)
enum class ESolsticeHeroClass : uint8 {
    ESHC_Invalid,
    ESHC_Assault,
    ESHC_Demolition,
    ESHC_Engineer,
    ESHC_Heavy,
    ESHC_Hellfire,
    ESHC_Marksman,
    ESHC_Medic,
    ESMC_Psychic,
    ESMC_Recon,
    ESMC_Terminator,
    ESMC_Executor,
    ESMC_Tutorial,
    ESMC_EnemyMarine,
    ESMC_Condatis,
};

