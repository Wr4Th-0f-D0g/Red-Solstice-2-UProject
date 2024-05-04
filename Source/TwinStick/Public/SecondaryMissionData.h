#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SecondaryMissionData.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryMissionData : public FTableRowBase {
    GENERATED_BODY()
public:
    TWINSTICK_API FSecondaryMissionData();
};

