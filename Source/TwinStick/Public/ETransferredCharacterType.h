#pragma once
#include "CoreMinimal.h"
#include "ETransferredCharacterType.generated.h"

UENUM(BlueprintType)
enum class ETransferredCharacterType : uint8 {
    Invalid,
    Skirmish,
    Campaign,
};

