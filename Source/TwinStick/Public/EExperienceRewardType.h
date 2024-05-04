#pragma once
#include "CoreMinimal.h"
#include "EExperienceRewardType.generated.h"

UENUM(BlueprintType)
enum class EExperienceRewardType : uint8 {
    ERT_PrimaryMission,
    ERT_SecondaryMission,
    ERT_Kill,
    ERT_Looting,
    ERT_Miscellaneous,
    ERT_Bonus,
};

