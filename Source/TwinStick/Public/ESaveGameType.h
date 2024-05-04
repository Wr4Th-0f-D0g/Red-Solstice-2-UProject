#pragma once
#include "CoreMinimal.h"
#include "ESaveGameType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameType : uint8 {
    QuickSave,
    OldAutoSave,
    AutoSave,
    PreMissionAutoSave,
    ManualSave,
    Ironman,
    Invalid,
};

