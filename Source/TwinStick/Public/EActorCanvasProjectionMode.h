#pragma once
#include "CoreMinimal.h"
#include "EActorCanvasProjectionMode.generated.h"

UENUM(BlueprintType)
enum class EActorCanvasProjectionMode : uint8 {
    ComponentPoint,
    ComponentBoundingBox,
    ComponentScreenBoundingBox,
    ActorBoundingBox,
    ActorScreenBoundingBox,
};

