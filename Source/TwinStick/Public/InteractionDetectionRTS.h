#pragma once
#include "CoreMinimal.h"
#include "InteractionDetectionComponent.h"
#include "InteractionDetectionRTS.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractionDetectionRTS : public UInteractionDetectionComponent {
    GENERATED_BODY()
public:
    UInteractionDetectionRTS(const FObjectInitializer& ObjectInitializer);

};

