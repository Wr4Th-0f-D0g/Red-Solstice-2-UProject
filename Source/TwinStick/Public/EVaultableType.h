#pragma once
#include "CoreMinimal.h"
#include "EVaultableType.generated.h"

UENUM(BlueprintType)
enum class EVaultableType : uint8 {
    EVaultType_None,
    EVaultType_StandardVault,
    EVaultType_Window,
};

