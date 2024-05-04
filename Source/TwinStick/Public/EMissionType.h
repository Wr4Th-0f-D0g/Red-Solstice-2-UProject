#pragma once
#include "CoreMinimal.h"
#include "EMissionType.generated.h"

UENUM(BlueprintType)
enum class EMissionType : uint8 {
    Invalid,
    Ambush,
    DeliverItem,
    DeployItem,
    DestroyActor,
    FindItem,
    HoldPosition,
    ManagePowerGrid,
    Pickup,
    PowerSector,
    ReachLocation,
    SeekAndDestroy,
    SpawnAndInteract,
    SupressBiomass,
    UseObject,
};

