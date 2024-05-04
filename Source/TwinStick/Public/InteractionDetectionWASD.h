#pragma once
#include "CoreMinimal.h"
#include "InteractionDetectionComponent.h"
#include "InteractionDetectionWASD.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractionDetectionWASD : public UInteractionDetectionComponent {
    GENERATED_BODY()
public:
    UInteractionDetectionWASD(const FObjectInitializer& ObjectInitializer);

};

