#pragma once
#include "CoreMinimal.h"
#include "EFollowerAssignment.generated.h"

UENUM(BlueprintType)
enum class EFollowerAssignment : uint8 {
    Unassigned,
    Assigned,
    Scripted,
};

