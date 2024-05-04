#pragma once
#include "CoreMinimal.h"
#include "ELocationSelectionMode.generated.h"

UENUM(BlueprintType)
enum class ELocationSelectionMode : uint8 {
    SingleLMARandomBoundingBox,
    SingleLMAFixedMarkers,
    SingleLMARandomMarkers,
    MultipleLMAMarkerLocation,
    MultipleLMARandomBoundingBox,
    MultipleLMACenter,
    MultipleLMAMultipleMarkers,
};

