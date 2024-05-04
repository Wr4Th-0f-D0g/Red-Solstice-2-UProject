#pragma once
#include "CoreMinimal.h"
#include "ENavAreaFlag.generated.h"

UENUM(BlueprintType)
namespace ENavAreaFlag {
    enum Type {
        Default,
        Jump,
        Vault,
        WindowClimb,
        ProjectionAvoid,
        SafeZone,
    };
}

