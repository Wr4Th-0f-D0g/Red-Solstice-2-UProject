#pragma once
#include "CoreMinimal.h"
#include "ETRSNavRecoveryAbility.generated.h"

UENUM(BlueprintType)
enum class ETRSNavRecoveryAbility : uint8 {
    OffNavMesh,
    OnNavMeshIsland,
    Custom,
};

