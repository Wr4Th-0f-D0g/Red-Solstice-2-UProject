#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "RTS_DebugCameraController.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ARTS_DebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ARTS_DebugCameraController(const FObjectInitializer& ObjectInitializer);

};

