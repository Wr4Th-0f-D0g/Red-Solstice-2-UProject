#pragma once
#include "CoreMinimal.h"
#include "InteractionDetectionWASD.h"
#include "InteractionDetectionGamepad.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractionDetectionGamepad : public UInteractionDetectionWASD {
    GENERATED_BODY()
public:
    UInteractionDetectionGamepad(const FObjectInitializer& ObjectInitializer);

};

