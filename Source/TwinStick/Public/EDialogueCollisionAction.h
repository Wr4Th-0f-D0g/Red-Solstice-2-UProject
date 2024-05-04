#pragma once
#include "CoreMinimal.h"
#include "EDialogueCollisionAction.generated.h"

UENUM(BlueprintType)
enum class EDialogueCollisionAction : uint8 {
    CancelThisDialogue,
    StopOldAndPlayThis,
    PlayThisAfter,
};

