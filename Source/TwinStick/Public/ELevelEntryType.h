#pragma once
#include "CoreMinimal.h"
#include "ELevelEntryType.generated.h"

UENUM(BlueprintType)
enum class ELevelEntryType : uint8 {
    DirectSpawn,
    Dropship,
    Train,
};

