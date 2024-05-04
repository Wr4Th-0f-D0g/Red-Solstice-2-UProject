#pragma once
#include "CoreMinimal.h"
#include "EProfileSaveType.generated.h"

UENUM(BlueprintType)
enum class EProfileSaveType : uint8 {
    Invalid,
    Main,
    DelayedBackup,
    LocalBackup,
    CloudBackup,
};

