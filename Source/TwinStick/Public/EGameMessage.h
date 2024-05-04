#pragma once
#include "CoreMinimal.h"
#include "EGameMessage.generated.h"

UENUM(BlueprintType)
enum class EGameMessage : uint8 {
    All,
    Local,
    PlayerWidget,
    GlobalPlayerWidget,
};

