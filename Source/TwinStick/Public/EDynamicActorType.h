#pragma once
#include "CoreMinimal.h"
#include "EDynamicActorType.generated.h"

UENUM(BlueprintType)
enum class EDynamicActorType : uint8 {
    All,
    Terminals,
    Doors,
    PowerRelays,
    Lights,
    VaultActors,
    Windows,
};

