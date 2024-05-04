#pragma once
#include "CoreMinimal.h"
#include "EProtectActorTaskStatus.generated.h"

UENUM(BlueprintType)
enum class EProtectActorTaskStatus : uint8 {
    Succeeded,
    Failed,
};

